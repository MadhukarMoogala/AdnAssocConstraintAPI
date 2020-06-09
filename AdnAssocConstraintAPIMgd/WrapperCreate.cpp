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

#include "StdAfx.h"
#include "AdnAssocConstraintAPI.h"
#include "ADNAssocCreateConstraint.h"

using namespace System;
using namespace Autodesk::AutoCAD::ApplicationServices;
using namespace Autodesk::AutoCAD::DatabaseServices;
using namespace Autodesk::AutoCAD::Geometry;

namespace Autodesk
{
	namespace ADN 
	{
		namespace AutoCAD
		{
			public ref class AssocUtil
			{

			private:

				AssocUtil(void){}

			public:

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a coincident geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateCoincidentConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity
					Point3d ptEnt1,		// Point on first entity used to determine which subentity point is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which subentity point is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createCoincidentConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a parallel geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateParallelConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createParallelConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a perpendicular geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreatePerpendicularConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createPerpendicularConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a concentric geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateConcentricConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createConcentricConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a colinear geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateColinearConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createColinearConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a horizontal geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateHorizontalConstraint(
					ObjectId entId1,	// ObjectID of first entity
					Point3d ptEnt1		// Point on first entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					
					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					
					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createHorizontalConstraint(entObjId1, pt1)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a vertical geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateVerticalConstraint(
					ObjectId entId1,	// ObjectID of first entity
					Point3d ptEnt1		// Point on first entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createVerticalConstraint(entObjId1, pt1)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a fix geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateFixConstraint(
					ObjectId entId1,	// ObjectID of first entity
					Point3d ptEnt1		// Point on first entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createFixConstraint(entObjId1, pt1)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a tangent geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateTangentConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createTangentConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a smooth geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateSmoothConstraint(
					ObjectId entId1,	// ObjectID of first entity which is a spline
					ObjectId entId2,	// ObjectID of second entity which can be a spline, line, arc, or polyline
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createSmoothConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a symmetric geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateSymmetricConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity 
					ObjectId entSymId,	// ObjectID of third entity 
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2,		// Point on second entity used to determine which edge subentity is closest to it
					Point3d ptEntSym	// Point on third entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);
					AcDbObjectId entObjId3 = GETOBJECTID(entSymId);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);
					AcGePoint3d pt3 = GETPOINT3D(ptEntSym);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createSymmetricConstraint(entObjId1, entObjId2, entObjId3, pt1, pt2, pt3)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a equal length geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateEqualLengthConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity 
					Point3d ptEnt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d ptEnt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(ptEnt1);
					AcGePoint3d pt2 = GETPOINT3D(ptEnt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createEqualLengthConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a equal radius geometric constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void CreateEqualRadiusConstraint(
					ObjectId entId1,	// ObjectID of first entity
					ObjectId entId2,	// ObjectID of second entity 
					Point3d entPt1,		// Point on first entity used to determine which edge subentity is closest to it
					Point3d entPt2		// Point on second entity used to determine which edge subentity is closest to it
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(entPt1);
					AcGePoint3d pt2 = GETPOINT3D(entPt2);

					Acad::ErrorStatus es;

					if((es = AcDbAssoc2dConstraintAPI::createEqualRadiusConstraint(entObjId1, entObjId2, pt1, pt2)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates an aligned dimensional constraint (between 2 different entities)
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateAlignedDimConstraint(
					ObjectId entId1,	// ObjectID of first entity for aligned dimension
					ObjectId entId2,	// ObjectID of second entity for aligned dimension
					Point3d entPt1,		// Point on first entity used to determine first point sub entity for the aligned dimension
					Point3d entPt2,		// Point on second entity used to determine second point sub entity for the aligned dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(entPt1);
					AcGePoint3d pt2 = GETPOINT3D(entPt2);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createAlignedDimConstraint(entObjId1, pt1, entObjId2, pt2, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates an aligned dimensional constraint (between 2 vertices on the same entity)
				//
				////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateAlignedDimConstraint(
					ObjectId entId,		// ObjectID of entity for aligned dimension
					Point3d entPt1,		// Point on entity used to determine first point sub entity for the aligned dimension
					Point3d entPt2,		// Point on entity used to determine second point sub entity for the aligned dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId = GETOBJECTID(entId);
					
					AcGePoint3d pt1 = GETPOINT3D(entPt1);
					AcGePoint3d pt2 = GETPOINT3D(entPt2);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createAlignedDimConstraint(entObjId, pt1, pt2, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates an aligned dimensional constraint on whole entity or on a segment of a Polyline
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateAlignedDimConstraint(
					ObjectId entId,		// ObjectID of entity for aligned dimension
					Point3d dimPos,		// Location of the dimension
					SubentityId subentId //subentity id, only used if entity is a polyline
					)
				{
					AcDbObjectId entObjId = GETOBJECTID(entId);
					
					AcGePoint3d pos = GETPOINT3D(dimPos);

					AcDbSubentId id = GETSUBENTITYID(subentId);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createAlignedDimConstraint(entObjId, pos, id, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a 2 line angular dimensional constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId Create2LineAngularDimConstraint(
					ObjectId entId1,	// ObjectID of first entity for angular dimension
					ObjectId entId2,	// ObjectID of second entity for angular dimension
					Point3d entPt1,		// Point on first entity used to determine edge sub entity for the angular dimension
					Point3d entPt2,		// Point on second entity used to determine edge sub entity for the angular dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(entPt1);
					AcGePoint3d pt2 = GETPOINT3D(entPt2);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::create2LineAngularDimConstraint(entObjId1, entObjId2, pt1, pt2, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates an arc angular dimensional constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateArcAngularDimConstraint(
					ObjectId entId,		// ObjectID of arc based entity
					Point3d entPt,		// Point on arc based entity
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId = GETOBJECTID(entId);
					
					AcGePoint3d pt = GETPOINT3D(entPt);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createArcAngularDimConstraint(entObjId, pt, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a 3 point angular dimensional constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId Create3PointAngularDimConstraint(
					ObjectId entId1,	// ObjectID of first entity for angular dimension
					ObjectId entId2,	// ObjectID of second entity for angular dimension
					ObjectId entId3,	// ObjectID of third entity for angular dimension
					Point3d entPt1,		// Point on first entity used to determine point sub entity for the angular dimension
					Point3d entPt2,		// Point on second entity used to determine second point sub entity for the angular dimension
					Point3d entPt3,		// Point on third entity used to determine third point sub entity for the angular dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);
					AcDbObjectId entObjId3 = GETOBJECTID(entId3);

					AcGePoint3d pt1 = GETPOINT3D(entPt1);
					AcGePoint3d pt2 = GETPOINT3D(entPt2);
					AcGePoint3d pt3 = GETPOINT3D(entPt3);

					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::create3PointAngularDimConstraint(
						entObjId1, 
						entObjId2, 
						entObjId3, 
						pt1, 
						pt2, 
						pt3, 
						pos, 
						varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a radial dimensional constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateRadialDimConstraint(
					ObjectId entId,		// ObjectID of entity for radial dimension
					Point3d entPt,		// Point on first entity used to determine arc sub entity for the radial dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId = GETOBJECTID(entId);

					AcGePoint3d pt = GETPOINT3D(entPt);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createRadialDimConstraint(entObjId, pt, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a diameter dimensional constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateDiamDimConstraint(
					ObjectId entId,		// ObjectID of entity for radial dimension
					Point3d entPt,		// Point on first entity used to determine arc sub entity for the radial dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId = GETOBJECTID(entId);

					AcGePoint3d pt = GETPOINT3D(entPt);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createDiamDimConstraint(entObjId, pt, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates an horizontal dimensional constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateHorizontalDimConstraint(
					ObjectId entId1,	// ObjectID of first entity for horizontal dimension
					ObjectId entId2,	// ObjectID of second entity for horizontal dimension
					Point3d entPt1,		// Point on first entity used to determine point sub entity for the horizontal dimension
					Point3d entPt2,		// Point on second entity used to determine point sub entity for the horizontal dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(entPt1);
					AcGePoint3d pt2 = GETPOINT3D(entPt2);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createHorizontalDimConstraint(entObjId1, entObjId2, pt1, pt2, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Creates a vertical dimensional constraint
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId CreateVerticalDimConstraint(
					ObjectId entId1,	// ObjectID of first entity for vertical dimension
					ObjectId entId2,	// ObjectID of second entity for vertical dimension
					Point3d entPt1,		// Point on first entity used to determine point sub entity for the vertical dimension
					Point3d entPt2,		// Point on second entity used to determine point sub entity for the vertical dimension
					Point3d dimPos		// Location of the dimension
					)
				{
					AcDbObjectId entObjId1 = GETOBJECTID(entId1);
					AcDbObjectId entObjId2 = GETOBJECTID(entId2);

					AcGePoint3d pt1 = GETPOINT3D(entPt1);
					AcGePoint3d pt2 = GETPOINT3D(entPt2);
					AcGePoint3d pos = GETPOINT3D(dimPos);

					Acad::ErrorStatus es;

					AcDbObjectId varDimId; 

					if((es = AcDbAssoc2dConstraintAPI::createVerticalDimConstraint(entObjId1, entObjId2, pt1, pt2, pos, varDimId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(varDimId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Finds an existing AcDbAssocVariable of the given name in the scope of the given BTR
				//		Optionally creating a new empty one, if it does not exist yet
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static ObjectId GetVariableByName(ObjectId btrId, System::String^ name, bool createIfDoesNotExist)
				{
					Acad::ErrorStatus es;

					AcDbObjectId _btrId = GETOBJECTID(btrId);

					AcDbObjectId variableId;

					es = AcDbAssoc2dConstraintAPI::getVariableByName(_btrId, CString(name), createIfDoesNotExist, variableId);

					if(es == Acad::eNullObjectId && !createIfDoesNotExist)
					{
						return ObjectId::Null;
					}
		
					if(es != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					return ToObjectId(variableId);
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Renames an existing associative variable
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void RenameVariable(ObjectId variableId, System::String^ newName, bool updateReferencingExpressions)
				{
					Acad::ErrorStatus es;

					AcDbObjectId _variableId = GETOBJECTID(variableId);

					if((es = AcDbAssoc2dConstraintAPI::renameVariable(_variableId, CString(newName), updateReferencingExpressions)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Returns properties about a specific associative variable 
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void GetVariableValue(ObjectId variableId, 
					[System::Runtime::InteropServices::Out] System::String^% name,
					[System::Runtime::InteropServices::Out] ResultBuffer^% value,
					[System::Runtime::InteropServices::Out] System::String^% expression,
					[System::Runtime::InteropServices::Out] System::String^% evaluatorId)
				{
					Acad::ErrorStatus es;
				
					AcDbObjectId _variableId = GETOBJECTID(variableId);

					AcString _name;
					AcDbEvalVariant _value;
					AcString _expression;
					AcString _evaluatorId;

					if((es = AcDbAssoc2dConstraintAPI::getVariableValue(_variableId, _name, _value, _expression, _evaluatorId)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
						return;
					}

					name = gcnew System::String(_name.kTCharPtr());

					value = gcnew ResultBuffer();
					value->Add(gcnew TypedValue(40, _value.resval.rreal));

					expression = gcnew System::String(_expression.kTCharPtr());
					evaluatorId = gcnew System::String(_evaluatorId.kTCharPtr());
				}

				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				// Use: Modifies an existing associative variable 
				//
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				static void SetVariableValue(ObjectId variableId,
					ResultBuffer^ value,
					System::String^ expression,
					System::String^ evaluatorId,
					[System::Runtime::InteropServices::Out] System::String^% errorMessage)
				{
					Acad::ErrorStatus es;
				
					AcDbObjectId _variableId = GETOBJECTID(variableId);

					AcDbEvalVariant _value;

					if(value != nullptr)
					{
						ResultBufferEnumerator^ iter = value->GetEnumerator();

						if(iter->MoveNext())
						{
							_value = AcDbEvalVariant((double)iter->Current.Value);
						}
					}

					AcString _errorMessage;

					if((es = AcDbAssoc2dConstraintAPI::setVariableValue(_variableId, _value, CString(expression), CString(evaluatorId), _errorMessage)) != Acad::eOk)
					{
						Autodesk::AutoCAD::Runtime::ErrorStatus err = (Autodesk::AutoCAD::Runtime::ErrorStatus)es;
						throw gcnew Autodesk::AutoCAD::Runtime::Exception(err);
					}

					errorMessage = gcnew System::String(_errorMessage.kTCharPtr());
				}
			};
		}
	}
}

				



