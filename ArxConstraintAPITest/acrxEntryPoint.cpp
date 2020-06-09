// (C) Copyright 2002-2007 by Autodesk, Inc. 
//
// Permission to use, copy, modify, and distribute this software in
// object code form for any purpose and without fee is hereby granted, 
// provided that the above copyright notice appears in all copies and 
// that both that copyright notice and the limited warranty and
// restricted rights notice below appear in all supporting 
// documentation.
//
// AUTODESK PROVIDES THIS PROGRAM "AS IS" AND WITH ALL FAULTS. 
// AUTODESK SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTY OF
// MERCHANTABILITY OR FITNESS FOR A PARTICULAR USE.  AUTODESK, INC. 
// DOES NOT WARRANT THAT THE OPERATION OF THE PROGRAM WILL BE
// UNINTERRUPTED OR ERROR FREE.
//
// Use, duplication, or disclosure by the U.S. Government is subject to 
// restrictions set forth in FAR 52.227-19 (Commercial Computer
// Software - Restricted Rights) and DFAR 252.227-7013(c)(1)(ii)
// (Rights in Technical Data and Computer Software), as applicable.
//

//-----------------------------------------------------------------------------
//----- acrxEntryPoint.cpp
//-----------------------------------------------------------------------------
#include "StdAfx.h"
#include "resource.h"
#include <sstream>
#include <string>
using namespace std;

#include "AdnAssocConstraintAPI.h"
#include "AdnAssocCreateConstraint.h"

//-----------------------------------------------------------------------------
#define szRDS _RXST("Adsk")
//-----------------------------------------------------------------------------

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ObjectARX EntryPoint
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class CArxConstraintAPITest : public AcRxArxApp {

public:

	CArxConstraintAPITest () : AcRxArxApp () 
	{
	}

	virtual AcRx::AppRetCode On_kInitAppMsg (void *pkt) 
	{
		AcRx::AppRetCode retCode = AcRxArxApp::On_kInitAppMsg (pkt);

		return (retCode);
	}

	virtual AcRx::AppRetCode On_kUnloadAppMsg (void *pkt) 
	{
		// You *must* call On_kUnloadAppMsg here
		AcRx::AppRetCode retCode =AcRxArxApp::On_kUnloadAppMsg (pkt);

		// TODO: Unload dependencies here

		return (retCode);
	}

	virtual void RegisterServerComponents () 
	{

	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createCoincidentConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlcoinconst(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1,pt2;
		AcDbObjectId obj1,obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1,ent1);
		acdbGetObjectId(obj2,ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createCoincidentConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createParallelConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlparconst(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1, pt2;
		AcDbObjectId obj1, obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1,ent1);
		acdbGetObjectId(obj2,ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createParallelConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createPerpendicularConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlperpconst(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1,pt2;
		AcDbObjectId obj1,obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createPerpendicularConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createConcentricConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlconcen(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1, pt2;
		AcDbObjectId obj1, obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createConcentricConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createColinearConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlcolin(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1, pt2;
		AcDbObjectId obj1, obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createColinearConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createHorizontalConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlhor(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1;
		ads_point pt1;
		AcDbObjectId obj1;

		if(acedEntSel(L"\nSelect entity:", ent1, pt1) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);

		AcGePoint3d pt3d1 = asPnt3d(pt1);

		if((err = AcDbAssoc2dConstraintAPI::createHorizontalConstraint(obj1, pt3d1)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createVerticalConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlver(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1;
		ads_point pt1;
		AcDbObjectId obj1;

		if(acedEntSel(L"\nSelect entity:", ent1, pt1) != RTNORM)
			return;

		acdbGetObjectId(obj1,ent1);

		AcGePoint3d pt3d1 = asPnt3d(pt1);

		if((err = AcDbAssoc2dConstraintAPI::createVerticalConstraint(obj1, pt3d1)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createFixConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlfix(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1;
		ads_point pt1;
		AcDbObjectId obj1;

		if(acedEntSel(L"\nSelect entity:", ent1, pt1) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);

		AcGePoint3d pt3d1 = asPnt3d(pt1);

		if((err = AcDbAssoc2dConstraintAPI::createFixConstraint(obj1, pt3d1)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createTangentConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hltan(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1, pt2;
		AcDbObjectId obj1, obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createTangentConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createSmoothConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlg2sm(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1, pt2;
		AcDbObjectId obj1, obj2;

		if(acedEntSel(L"\nSelect first spline:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity (line, arc or spline):", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createSmoothConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createSymmetricConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlsym(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2,ent3;
		ads_point pt1, pt2, pt3;
		AcDbObjectId obj1, obj2, obj3;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect the symmetry line:", ent3, pt3) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);
		acdbGetObjectId(obj3, ent3);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);
		AcGePoint3d pt3d3 = asPnt3d(pt3);

		if((err = AcDbAssoc2dConstraintAPI::createSymmetricConstraint(obj1, obj2, obj3, pt3d1, pt3d2, pt3d3)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createEqualLengthConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hleqln(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1, pt2;
		AcDbObjectId obj1,obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createEqualLengthConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createEqualRadiusConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hleqrad(void)
	{
		Acad::ErrorStatus err = Acad::eOk;

		ads_name ent1, ent2;
		ads_point pt1, pt2;
		AcDbObjectId obj1, obj2;

		if(acedEntSel(L"\nSelect first entity:", ent1, pt1) != RTNORM)
			return;

		if(acedEntSel(L"\nSelect second entity:", ent2, pt2) != RTNORM)
			return;

		acdbGetObjectId(obj1, ent1);
		acdbGetObjectId(obj2, ent2);

		AcGePoint3d pt3d1 = asPnt3d(pt1);
		AcGePoint3d pt3d2 = asPnt3d(pt2);

		if((err = AcDbAssoc2dConstraintAPI::createEqualRadiusConstraint(obj1, obj2, pt3d1, pt3d2)) != Acad::eOk)
			acutPrintf(L"\n Failed to create constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createAlignedDimConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlDimAlign(void)
	{
		Acad::ErrorStatus err;

		AcDbObjectId varDimId;

		ads_name name;
		ads_point pt;

		acedInitGet(NULL , L"Object"); 

		int ret = acedEntSel(L"\nSpecifiy first constraint point or [Object]:", name, pt);

		if(ret == RTCAN)
			return;

		if(ret == RTKWORD)
		{
			ACHAR keyword[128];
			acedGetInput(keyword);
	
			if(!wcscmp(keyword, L"Object"))
			{
				acedInitGet(NULL ,NULL); 
				
				AcDbObjectId entId;
				AcDbSubentId subentId = kNullSubentId;
				int marker;

				if (eOk != getObjectAndGsMarker(entId, marker))
					return;

				AcDbObjectPointer <AcDbEntity> pEntity(entId, AcDb::kForRead);

				if(pEntity->isKindOf(AcDbPolyline::desc()))
				{
					AcGePoint3d pickpnt;
					AcGeMatrix3d xform;
					int numIds;
					AcDbFullSubentPath* subentIds;
					pEntity->getSubentPathsAtGsMarker(AcDb::kEdgeSubentType, 
						marker, 
						pickpnt, 
						xform, 
						numIds, 
						subentIds);

					if (numIds > 0) 
					{
					   subentId = subentIds[0].subentId();
					}

					delete []subentIds;
				}
				
				if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension line location:", pt ) ) 
					return; 

				AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

				if((err = AcDbAssoc2dConstraintAPI::createAlignedDimConstraint(entId, 
					dimPos, 
					subentId, 
					varDimId)) != Acad::eOk)

					acutPrintf(L"\n Failed to create Aligned Dimension constraint...");

				return;
			}
		}

		if(ret != RTNORM)
			return;

		AcDbObjectId entId1;
		acdbGetObjectId(entId1, name);
		AcGePoint3d entPt1 = UcsToWorld(asPnt3d(pt));
		
		if( acedEntSel(L"\nSpecifiy second constraint point:", name, pt) != RTNORM )
			return;

		AcDbObjectId entId2;
		acdbGetObjectId(entId2, name);
		AcGePoint3d entPt2 = UcsToWorld(asPnt3d(pt));

		if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension line location:", pt ) ) 
			return; 

		AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

		if(entId1 == entId2)
		{
			if((err = AcDbAssoc2dConstraintAPI::createAlignedDimConstraint(entId1, 
				entPt1, 
				entPt2, 
				dimPos, 
				varDimId)) != Acad::eOk)

					acutPrintf(L"\n Failed to create Aligned Dimension constraint...");
		}
		else
		{
			if((err = AcDbAssoc2dConstraintAPI::createAlignedDimConstraint(entId1, 
				entPt1, 
				entId2, 
				entPt2, 
				dimPos, 
				varDimId)) != Acad::eOk)

				acutPrintf(L"\n Failed to create Aligned Dimension constraint...");
		}
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createXXXAngularDimConstraint functions
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlDimAngular(void)
	{
		Acad::ErrorStatus err;

		AcDbObjectId varDimId;

		ads_name name;
		ads_point pt;

		acedInitGet(NULL , L"3Points"); 

		int ret = acedEntSel(L"\nSpecifiy first line or arc or [3Points]:", name, pt);

		if(ret == RTCAN)
			return;

		if(ret == RTKWORD)
		{
			ACHAR keyword[128];
			acedGetInput(keyword);
	
			if(!wcscmp(keyword, L"3Points"))
			{
				if(acedEntSel(L"\nSpecifiy angle vertex:", name, pt) != RTNORM)
					return;

				AcDbObjectId entId1;
				acdbGetObjectId(entId1, name);
				AcGePoint3d entPt1 = UcsToWorld(asPnt3d(pt));

				if(acedEntSel(L"\nSpecifiy first angle constraint point:", name, pt) != RTNORM)
					return;

				AcDbObjectId entId2;
				acdbGetObjectId(entId2, name);
				AcGePoint3d entPt2 = UcsToWorld(asPnt3d(pt));

				if(acedEntSel(L"\nSpecifiy second angle constraint point:", name, pt) != RTNORM)
					return;

				AcDbObjectId entId3;
				acdbGetObjectId(entId3, name);
				AcGePoint3d entPt3 = UcsToWorld(asPnt3d(pt));

				if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension location:", pt ) ) 
					return; 

				AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

				if((err = AcDbAssoc2dConstraintAPI::create3PointAngularDimConstraint(entId1,  
																					 entId2,  
																					 entId3,  
																					 entPt1,
																					 entPt2,
																					 entPt3,
																					 dimPos,
																					 varDimId)) != Acad::eOk)
					acutPrintf(L"\n Failed to create 3Points Angular constraint...");

				return;
			}
		}

		if(ret != RTNORM)
			return;

		AcDbObjectId entId1;
		acdbGetObjectId(entId1, name);
		AcGePoint3d entPt1 = UcsToWorld(asPnt3d(pt));

		AcDbObjectPointer <AcDbEntity> pEntity(entId1, AcDb::kForRead);

		if(pEntity->isKindOf(AcDbArc::desc()))
		{
			if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension location:", pt ) ) 
				return; 

			AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

			if((err = AcDbAssoc2dConstraintAPI::createArcAngularDimConstraint(entId1, 
				entPt1, 
				dimPos, 
				varDimId)) != Acad::eOk)

				acutPrintf(L"\n Failed to create Arc Angular constraint...");

			return;
		}

		if(acedEntSel(L"\nSpecifiy second line:", name, pt) != RTNORM)
			return;

		AcDbObjectId entId2;
		acdbGetObjectId(entId2, name);
		AcGePoint3d entPt2 = UcsToWorld(asPnt3d(pt));

		if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension location:", pt ) ) 
			return; 

		AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

		if((err = AcDbAssoc2dConstraintAPI::create2LineAngularDimConstraint(
			entId1, 
			entId2, 
			entPt1, 
			entPt2, 
			dimPos, 
			varDimId)) != Acad::eOk)

			acutPrintf(L"\n Failed to create 2Lines Angular constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createRadialDimConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlDimRadial(void)
	{
		Acad::ErrorStatus err;

		AcDbObjectId varDimId;

		int ret;
		ads_name name;
		ads_point pt;

		ret = acedEntSel(L"\nSpecifiy entity to constraint:", name, pt);

		if(ret != RTNORM)
			return;

		AcDbObjectId entId1;
		acdbGetObjectId(entId1, name);
		AcGePoint3d entPt1 = UcsToWorld(asPnt3d(pt));

		if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension line location:", pt ) ) 
			return; 

		AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

		if((err = AcDbAssoc2dConstraintAPI::createRadialDimConstraint(entId1, 
			entPt1, 
			dimPos, 
			varDimId)) != Acad::eOk)

			acutPrintf(L"\n Failed to create Radial Dimension constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createDiamDimConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlDimDiametric(void)
	{
		Acad::ErrorStatus err;

		AcDbObjectId varDimId;

		int ret;
		ads_name name;
		ads_point pt;

		ret = acedEntSel(L"\nSpecifiy entity to constraint:", name, pt);

		if(ret != RTNORM)
			return;

		AcDbObjectId entId1;
		acdbGetObjectId(entId1, name);
		AcGePoint3d entPt1 = UcsToWorld(asPnt3d(pt));

		if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension line location:", pt ) ) 
			return; 

		AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

		if((err = AcDbAssoc2dConstraintAPI::createDiamDimConstraint(entId1, 
			entPt1, 
			dimPos, 
			varDimId)) != Acad::eOk)

			acutPrintf(L"\n Failed to create Diametric Dimension constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createHorizontalDimConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlDimHorizontal(void)
	{
		Acad::ErrorStatus err;

		AcDbObjectId varDimId;

		ads_name name;
		ads_point pt;

		if(acedEntSel(L"\nSpecifiy first constraint point:", name, pt) != RTNORM)
			return;

		AcDbObjectId entId1;
		acdbGetObjectId(entId1, name);
		AcGePoint3d entPt1 = UcsToWorld(asPnt3d(pt));
		
		if( acedEntSel(L"\nSpecifiy second constraint point:", name, pt) != RTNORM )
			return;

		AcDbObjectId entId2;
		acdbGetObjectId(entId2, name);
		AcGePoint3d entPt2 = UcsToWorld(asPnt3d(pt));

		if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension line location:", pt ) ) 
			return; 

		AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

		if((err = AcDbAssoc2dConstraintAPI::createHorizontalDimConstraint(
			entId1, 		 
			entId2, 
			entPt1,
			entPt2, 
			dimPos, 
			varDimId)) != Acad::eOk)

			acutPrintf(L"\n Failed to create Horizontal Dimension constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // createVerticalDimConstraint
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlDimVertical(void)
	{
		Acad::ErrorStatus err;

		AcDbObjectId varDimId;

		ads_name name;
		ads_point pt;

		if(acedEntSel(L"\nSpecifiy first constraint point:", name, pt) != RTNORM)
			return;

		AcDbObjectId entId1;
		acdbGetObjectId(entId1, name);
		AcGePoint3d entPt1 = UcsToWorld(asPnt3d(pt));
		
		if( acedEntSel(L"\nSpecifiy second constraint point:", name, pt) != RTNORM )
			return;

		AcDbObjectId entId2;
		acdbGetObjectId(entId2, name);
		AcGePoint3d entPt2 = UcsToWorld(asPnt3d(pt));

		if( RTNORM != acedGetPoint(NULL, L"\nSpecify dimension line location:", pt ) ) 
			return; 

		AcGePoint3d dimPos = UcsToWorld(asPnt3d(pt));

		if((err = AcDbAssoc2dConstraintAPI::createVerticalDimConstraint(
			entId1,  
			entId2, 
			entPt1,
			entPt2, 
			dimPos, 
			varDimId)) != Acad::eOk)

			acutPrintf(L"\n Failed to create Vertical Dimension constraint...");
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Illustrates several functionalities of AssocUtil Parameter API (Query, creation, modification, renaming)
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static void ArxConstraintTest_hlAddOrModifyParameter(void)
	{
		Acad::ErrorStatus es;

		ACHAR name[1024];
		if(acedGetString(NULL, L"\nEnter Parameter Name: ", name) != RTNORM)
			return;

		AcDbObjectId btrId = acdbCurDwg()->currentSpaceId();

		AcDbObjectId variableId;

		if((es = AcDbAssoc2dConstraintAPI::getVariableByName(btrId, name, false, variableId)) != Acad::eOk)
		{
			if(es != Acad::eNullObjectId)
			{
				acutPrintf(L"\n getVariableByName Failed...");
				return;
			}

			// setup the keywords required
			acedInitGet(RSG_NONULL, L"Yes No");
			
			TCHAR kword[128];
			if (RTNORM != acedGetKword(_T("\nthe Parameter doesn't exist, do you want to create it? [Yes/No]: "), kword))
			{
				return;
			}

			if(!wcscmp(kword, L"No"))
			{
				return;
			}

			if((es = AcDbAssoc2dConstraintAPI::getVariableByName(btrId, name, true, variableId)) != Acad::eOk)
			{
				acutPrintf(L"\n getVariableByName Failed...");
				return;
			}
		}
		
		//At this point parameter must exist
		AcString vname;
		AcDbEvalVariant value;
		AcString expression;
		AcString evaluatorId;

		if((es = AcDbAssoc2dConstraintAPI::getVariableValue(variableId,
			vname,
			value,
			expression,
			evaluatorId)) != Acad::eOk)
		{
			acutPrintf(L"\n getVariableValue Failed...");
			return;
		}

		std::wstring variantExpr = getVariantExpr(value);

		acutPrintf(L"\n - Current Value: %s = %s [Expression: %s]", 
			vname.kACharPtr(), 
			variantExpr.c_str(), 
			expression.kACharPtr());
		
	
		// setup the keywords required
		acedInitGet(RSG_NONULL, L"Rename Expression");
		
		TCHAR kword[128];
		if (RTNORM != acedGetKword(_T("\nEnter an option: [Rename/Expression]: "), kword))
		{
			return;
		}

		if(!wcscmp(kword, L"Rename"))
		{
			ACHAR newName[1024];
			if(acedGetString(NULL, L"\nEnter New Name: ", newName) != RTNORM)
				return;

			if((es = AcDbAssoc2dConstraintAPI::renameVariable(variableId, newName, true)) != Acad::eOk)
			{
				acutPrintf(L"\n renameVariable Failed...");
				return;
			}
		
			return;
		}

		if(!wcscmp(kword, L"Expression"))
		{
			ACHAR newExpr[1024];
			if(acedGetString(NULL, L"\nEnter New Expression: ", newExpr) != RTNORM)
				return;

			AcDbEvalVariant value;
			AcString errorMessage(L"Error setVariableValue failed");

			if((es = AcDbAssoc2dConstraintAPI::setVariableValue(variableId, 
				value, 
				newExpr, 
				evaluatorId, 
				errorMessage)) != Acad::eOk)
			{
				acutPrintf(L"\n setVariableValue Failed...");
				return;
			}
		
			return;
		}
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Utilities string conversions
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static std::wstring getVariantExpr(const AcDbEvalVariant& value)
	{
		switch(value.restype)
		{
			case 70: //kShort
			return numericToWString(value.resval.rint);
			
			case 90: //kLong
			return numericToWString(value.resval.rlong);

			case 40: //kDouble
			return numericToWString(value.resval.rreal);

			case 1: //kString
			return std::wstring(value.resval.rstring);
		
			default:
			return std::wstring(L"unknown");
		}
	}

	static std::wstring stringToWString(const std::string& s)
	{
		std::wstring temp(s.length(),L' ');
		std::copy(s.begin(), s.end(), temp.begin());
		return temp;
	}

	static std::wstring numericToWString(const int& in) 
	{
		std::ostringstream ost(ostringstream::out);
		ost << in;

		return stringToWString(ost.str());
	}

	static std::wstring numericToWString(const long& in) 
	{
		std::ostringstream ost(ostringstream::out);
		ost << in;

		return stringToWString(ost.str());
	}

	static std::wstring numericToWString(const double& in) 
	{
		std::ostringstream ost(ostringstream::out);
		ost << in;

		return stringToWString(ost.str());
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Utility: Get GS marker from user selection to further retrieve subent path 
    //          through "AcDbEntity::getSubentPathsAtGsMarker"
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static Acad::ErrorStatus getObjectAndGsMarker(AcDbObjectId& objId, int& marker)
	{
		ads_name sset;
	 
		if (ads_ssget(_T(":S"), NULL, NULL, NULL, sset) != RTNORM) 
		{
			ads_printf(_T("\nads_ssget has failed"));
			return Acad::eInvalidAdsName;
		}
	  
		// Get the entity from the selection set and get it's
		// subentity ID.  This code assumes that the user
		// selected only one item and that's a solid.
		//
		struct resbuf *pRb;
		if (ads_ssnamex(&pRb, sset, 0) != RTNORM) 
		{
			ads_ssfree(sset);
			return Acad::eAmbiguousOutput;
		}
		ads_ssfree(sset);
	  
		// Walk the list to the 3rd item which is the selected
		// entity's ename.

		//
		struct resbuf *pTemp;
		int i;
		for (i=1, pTemp = pRb;i<3;i++, pTemp = pTemp->rbnext)
			{ ; }
	 
		ads_name ename;
		ads_name_set(pTemp->resval.rlname, ename);
	  
		// Move on to the 4th list element which is the GsMarker
		//
		pTemp = pTemp->rbnext;
		marker = pTemp->resval.rint;
	 
		ads_relrb(pRb);
		acdbGetObjectId(objId, ename);
	 
		return Acad::eOk;
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Utility: UCS 2 World
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	static AcGePoint3d UcsToWorld(const AcGePoint3d& ucsPoint)
	{
		AcGeMatrix3d ucs;
		acedGetCurrentUCS(ucs);

		AcGePoint3d res(ucsPoint);

		return res.transformBy(ucs);
	}
} ;

//-----------------------------------------------------------------------------
IMPLEMENT_ARX_ENTRYPOINT(CArxConstraintAPITest)

ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlcoinconst, hlcoinconst, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlparconst, hlparconst, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlperpconst, hlperpconst, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlconcen, hlconcen, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlcolin, hlcolin, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlhor, hlhor, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlver, hlver, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlfix, hlfix, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hltan, hltan, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlg2sm, hlg2sm, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlsym, hlsym, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hleqln, hleqln, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hleqrad, hleqrad, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlDimAlign, hlDimAlign, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlDimAngular, hlDimAngular, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlDimRadial, hlDimRadial, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlDimHorizontal, hlDimhorizontal, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlDimVertical, hlDimVertical, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlDimDiametric, hlDimDiametric, ACRX_CMD_TRANSPARENT, NULL)
ACED_ARXCOMMAND_ENTRY_AUTO(CArxConstraintAPITest, ArxConstraintTest, _hlAddOrModifyParameter, hlAddOrModifyParameter, ACRX_CMD_TRANSPARENT, NULL)
