namespace ClassicGarage.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class _001 : DbMigration
    {
        public override void Up()
        {
            CreateTable(
                "dbo.PartsModels",
                c => new
                    {
                        ID = c.Int(nullable: false, identity: true),
                        CarID = c.Int(nullable: false),
                        Name = c.String(nullable: false),
                        CatalogNo = c.Int(nullable: false),
                        PurchasePrice = c.Int(nullable: false),
                        SalePrice = c.Int(nullable: false),
                        PurchaseDate = c.DateTime(nullable: false),
                        SaleDate = c.DateTime(nullable: false),
                    })
                .PrimaryKey(t => t.ID)
                .ForeignKey("dbo.CarModels", t => t.CarID, cascadeDelete: true)
                .Index(t => t.CarID);
            
            CreateTable(
                "dbo.RepairModels",
                c => new
                    {
                        ID = c.Int(nullable: false, identity: true),
                        CarID = c.Int(nullable: false),
                        Name = c.String(nullable: false),
                        Description = c.String(),
                        RepairCost = c.Int(nullable: false),
                    })
                .PrimaryKey(t => t.ID)
                .ForeignKey("dbo.CarModels", t => t.CarID, cascadeDelete: true)
                .Index(t => t.CarID);
            
        }
        
        public override void Down()
        {
            DropForeignKey("dbo.RepairModels", "CarID", "dbo.CarModels");
            DropForeignKey("dbo.PartsModels", "CarID", "dbo.CarModels");
            DropIndex("dbo.RepairModels", new[] { "CarID" });
            DropIndex("dbo.PartsModels", new[] { "CarID" });
            DropTable("dbo.RepairModels");
            DropTable("dbo.PartsModels");
        }
    }
}
