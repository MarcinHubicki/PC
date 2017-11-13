namespace ClassicGarage.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class InitialCreate : DbMigration
    {
        public override void Up()
        {
            CreateTable(
                "dbo.CarModels",
                c => new
                    {
                        ID = c.Int(nullable: false, identity: true),
                        Make = c.String(nullable: false),
                        Model = c.String(nullable: false),
                        Year = c.Int(nullable: false),
                        VIN = c.Int(nullable: false),
                        Name = c.String(nullable: false),
                        Photo = c.String(),
                        PurchaseDate = c.DateTime(nullable: false),
                        SaleDate = c.DateTime(nullable: false),
                        PurchasePrice = c.Int(nullable: false),
                        SalePrice = c.Int(nullable: false),
                        OwnerID = c.Int(nullable: false),
                    })
                .PrimaryKey(t => t.ID)
                .ForeignKey("dbo.OwnerModels", t => t.OwnerID, cascadeDelete: true)
                .Index(t => t.OwnerID);
            
            CreateTable(
                "dbo.OwnerModels",
                c => new
                    {
                        ID = c.Int(nullable: false, identity: true),
                        FirstName = c.String(nullable: false),
                        Lastname = c.String(nullable: false),
                        PhoneNo = c.Int(nullable: false),
                        Email = c.String(),
                    })
                .PrimaryKey(t => t.ID);
            
        }
        
        public override void Down()
        {
            DropForeignKey("dbo.CarModels", "OwnerID", "dbo.OwnerModels");
            DropIndex("dbo.CarModels", new[] { "OwnerID" });
            DropTable("dbo.OwnerModels");
            DropTable("dbo.CarModels");
        }
    }
}
