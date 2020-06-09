// (C) Copyright 2011 by Autodesk, Inc.  
//
using Autodesk.AutoCAD.Runtime;
[assembly: CommandClass(typeof(MgdConstraintAPITest.TestConstraints))]
namespace MgdConstraintAPITest
{
    using Autodesk.ADN.AutoCAD;
    using Autodesk.AutoCAD.ApplicationServices;
    using Autodesk.AutoCAD.DatabaseServices;
    using Autodesk.AutoCAD.EditorInput;
    using Autodesk.AutoCAD.Geometry;
    using Autodesk.AutoCAD.Runtime;

    /// <summary>
    /// Defines the <see cref="TestConstraints" />.
    /// </summary>
    public class TestConstraints
    {
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateCoincidentConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlcoin.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlcoin", "mghlcoinloc", CommandFlags.Modal)]
        public void mghlcoin()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateCoincidentConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateParallelConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlpar.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlpar", "mghlparloc", CommandFlags.Modal)]
        public void mghlpar()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateParallelConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreatePerpendicularConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlperp.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlperp", "mghlperploc", CommandFlags.Modal)]
        public void mghlperp()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreatePerpendicularConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateConcentricConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlconc.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlconc", "mghlconcloc", CommandFlags.Modal)]
        public void mghlconc()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateConcentricConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateColinearConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlcolin.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlcolin", "mghlcolinloc", CommandFlags.Modal)]
        public void mghlcolin()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateColinearConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateHorizontalConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlhor.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlhor", "mghlhorloc", CommandFlags.Modal)]
        public void mghlhor()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            try
            {
                AssocUtil.CreateHorizontalConstraint(entId1, entPt1);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateVerticalConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlvert.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlvert", "mghlvertloc", CommandFlags.Modal)]
        public void mghlvert()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            try
            {
                AssocUtil.CreateVerticalConstraint(entId1, entPt1);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateFixConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlfix.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlfix", "mghlfixloc", CommandFlags.Modal)]
        public void mghlfix()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            try
            {
                AssocUtil.CreateFixConstraint(entId1, entPt1);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateTangentConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghltan.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghltan", "mghltanloc", CommandFlags.Modal)]
        public void mghltan()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateTangentConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateSmoothConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlg2sm.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlg2sm", "mghlg2smloc", CommandFlags.Modal)]
        public void mghlg2sm()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateSmoothConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateSymmetricConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlsym.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlsym", "mghlsymloc", CommandFlags.Modal)]
        public void mghlsym()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            peo.Message = "\nSelect symmetry entity: ";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId symEntId = per.ObjectId;
            Point3d symEntPt = per.PickedPoint;

            try
            {
                AssocUtil.CreateSymmetricConstraint(entId1, entId2, symEntId, entPt1, entPt2, symEntPt);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateEqualLengthConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghleqln.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghleqln", "mghleqlnloc", CommandFlags.Modal)]
        public void mghleqln()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateEqualLengthConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateEqualRadiusConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghleqrad.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghleqrad", "mghleqradloc", CommandFlags.Modal)]
        public void mghleqrad()
        {
            Editor ed = Application.DocumentManager.MdiActiveDocument.Editor;

            PromptEntityOptions peo = new PromptEntityOptions("\nSelect first entity:");

            PromptEntityResult per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId1 = per.ObjectId;
            Point3d entPt1 = per.PickedPoint;

            peo.Message = "\nSelect second entity:";

            per = ed.GetEntity(peo);

            if (per.Status != PromptStatus.OK)
                return;

            ObjectId entId2 = per.ObjectId;
            Point3d entPt2 = per.PickedPoint;

            try
            {
                AssocUtil.CreateEqualRadiusConstraint(entId1, entId2, entPt1, entPt2);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nFailed to create constraint. ErrorStatus: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateAlignedDimConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghldimalign.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghldimalign", "mghldimalign", CommandFlags.Modal)]
        public void mghldimalign()
        {
            Document doc = Application.DocumentManager.MdiActiveDocument;
            Database db = doc.Database;
            Editor ed = doc.Editor;

            PromptEntityOptions peo1 = new PromptEntityOptions("\nSelect first entity: ");

            PromptEntityResult per1 = ed.GetEntity(peo1);

            if (per1.Status != PromptStatus.OK)
                return;

            PromptEntityOptions peo2 = new PromptEntityOptions("\nSelect second entity: ");

            PromptEntityResult per2 = ed.GetEntity(peo2);

            if (per2.Status != PromptStatus.OK)
                return;

            PromptPointResult ppr = ed.GetPoint("\nSelect dim pos: ");

            if (ppr.Status != PromptStatus.OK)
                return;

            try
            {
                ObjectId varDimId = AssocUtil.CreateAlignedDimConstraint(per1.ObjectId,
                    per2.ObjectId,
                    per1.PickedPoint,
                    per2.PickedPoint,
                    ppr.Value);

                string name;
                ResultBuffer value;
                string expression;
                string evaluatorId;

                AssocUtil.GetVariableValue(varDimId, out name, out value, out expression, out evaluatorId);

                ed.WriteMessage("\nDimension created successfully: {0} = {1}", name, expression);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nCreateAlignedDimConstraint failed: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateVerticalDimConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghldimvert.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghldimvert", "mghldimvert", CommandFlags.Modal)]
        public void mghldimvert()
        {
            Document doc = Application.DocumentManager.MdiActiveDocument;
            Database db = doc.Database;
            Editor ed = doc.Editor;

            PromptEntityOptions peo1 = new PromptEntityOptions("\nSelect first entity: ");

            PromptEntityResult per1 = ed.GetEntity(peo1);

            if (per1.Status != PromptStatus.OK)
                return;

            PromptEntityOptions peo2 = new PromptEntityOptions("\nSelect second entity: ");

            PromptEntityResult per2 = ed.GetEntity(peo2);

            if (per2.Status != PromptStatus.OK)
                return;

            PromptPointResult ppr = ed.GetPoint("\nSelect dim pos: ");

            if (ppr.Status != PromptStatus.OK)
                return;

            try
            {
                ObjectId varDimId = AssocUtil.CreateVerticalDimConstraint(per1.ObjectId,
                    per2.ObjectId,
                    per1.PickedPoint,
                    per2.PickedPoint,
                    ppr.Value);

                string name;
                ResultBuffer value;
                string expression;
                string evaluatorId;

                AssocUtil.GetVariableValue(varDimId, out name, out value, out expression, out evaluatorId);

                ed.WriteMessage("\nDimension created successfully: {0} = {1}", name, expression);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nCreateAlignedDimConstraint failed: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // CreateDiaDimConstraint
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghldimdia.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghldimdia", "mghldimdia", CommandFlags.Modal)]
        public void mghldimdia()
        {
            Document doc = Application.DocumentManager.MdiActiveDocument;
            Database db = doc.Database;
            Editor ed = doc.Editor;

            PromptEntityOptions peo1 = new PromptEntityOptions("\nSelect first entity: ");

            PromptEntityResult per1 = ed.GetEntity(peo1);

            if (per1.Status != PromptStatus.OK)
                return;



            PromptPointResult ppr = ed.GetPoint("\nSelect dim pos: ");

            if (ppr.Status != PromptStatus.OK)
                return;

            try
            {
                ObjectId varDimId = AssocUtil.CreateDiamDimConstraint(per1.ObjectId, per1.PickedPoint, ppr.Value);

                string name;
                ResultBuffer value;
                string expression;
                string evaluatorId;

                AssocUtil.GetVariableValue(varDimId, out name, out value, out expression, out evaluatorId);

                ed.WriteMessage("\nDimension created successfully: {0} = {1}", name, expression);
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nCreateDiamDimConstraint failed: " + ex.ErrorStatus.ToString());
            }
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Illustrates several functionalities of AssocUtil Parameter API (Query, creation, modification, renaming)
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// <summary>
        /// The mghlParam.
        /// </summary>
        [CommandMethod("HLTestGroup", "mghlParam", "mghlParam", CommandFlags.Modal)]
        public void mghlParam()
        {
            Document doc = Application.DocumentManager.MdiActiveDocument;
            Database db = doc.Database;
            Editor ed = doc.Editor;

            PromptResult pr = ed.GetString("\nEnter Parameter name: ");

            if (pr.Status != PromptStatus.OK)
                return;

            try
            {
                ObjectId variableId = AssocUtil.GetVariableByName(db.CurrentSpaceId, pr.StringResult, false);

                if (variableId == ObjectId.Null)
                {
                    PromptKeywordOptions pko =
                        new PromptKeywordOptions("\nThe Parameter doesn't exist, do you want to create it?:");

                    pko.AllowNone = false;
                    pko.Keywords.Add("Yes");
                    pko.Keywords.Add("No");
                    pko.Keywords.Default = "Yes";

                    PromptResult pkr = ed.GetKeywords(pko);

                    if (pkr.Status != PromptStatus.OK)
                        return;

                    if (pkr.StringResult == "No")
                    {
                        return;
                    }

                    variableId = AssocUtil.GetVariableByName(db.CurrentSpaceId, pr.StringResult, true);
                }

                //At this point parameter must exist
                string name;
                ResultBuffer value;
                string expression;
                string evaluatorId;

                AssocUtil.GetVariableValue(variableId, out name, out value, out expression, out evaluatorId);

                ResultBufferEnumerator iter = value.GetEnumerator();
                iter.MoveNext();

                ed.WriteMessage("\n - Current Value: {0} = {1} [Expression: {2}])", name, iter.Current.Value.ToString(), expression);

                PromptKeywordOptions pko2 = new PromptKeywordOptions("\n\nEnter an option:");
                pko2.AllowNone = false;
                pko2.Keywords.Add("Rename");
                pko2.Keywords.Add("Expression");
                pko2.Keywords.Default = "Rename";

                PromptResult pkr2 = ed.GetKeywords(pko2);

                if (pkr2.Status != PromptStatus.OK)
                    return;

                if (pkr2.StringResult == "Rename")
                {
                    PromptResult pr2 = ed.GetString("\nEnter new name: ");

                    if (pr2.Status != PromptStatus.OK)
                        return;

                    AssocUtil.RenameVariable(variableId, pr2.StringResult, true);
                }

                if (pkr2.StringResult == "Expression")
                {
                    PromptResult pr3 = ed.GetString("\nEnter new Expression: ");

                    if (pr3.Status != PromptStatus.OK)
                        return;

                    string errMsg;

                    AssocUtil.SetVariableValue(variableId, null, pr3.StringResult, evaluatorId, out errMsg);
                }
            }
            catch (Autodesk.AutoCAD.Runtime.Exception ex)
            {
                ed.WriteMessage("\nError: " + ex.ErrorStatus.ToString());
            }
        }
    }
}
