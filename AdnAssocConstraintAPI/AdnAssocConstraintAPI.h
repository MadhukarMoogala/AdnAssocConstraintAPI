// AdnAssocConstraintAPI.h

#pragma once

#include "AcConstrainedGeometry.h"
#include "AcDbAssocManager.h"
#include "AcDbAssocNetwork.h"
#include "AcGeomConstraint.h"
#include "AcImplicitConstr.h"
#include "AcDbAssocVariable.h"
#include "AcDbAssocDependency.h"
#include "AcDbAssocPersSubentIdPE.h"
#include "AcDbAssocValueDependency.h"
#include "AcDbAssoc2dConstraintGroup.h" // For AcDbAssoc2dConstraintGroup
#include "AcDbAssocGlobal.h"
#include "dbobjptr2.h"
#include "AcString.h"
#include "AcDbAssocDimDependencyBodyBase.h"
#include "AcDbAssocDimDependencyBody.h"
#include "dbdimassoc.h"   //AcDbDimAssoc
#include "dbdimptref.h"   //AcDbOsnapPointRef

#define DICTIONARYKEY _T("ACAD_ASSOCNETWORK")
#define EXPRESSION_EVALUATOR_DEFAULT _T("")