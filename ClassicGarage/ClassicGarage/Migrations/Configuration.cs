namespace ClassicGarage.Migrations
{
    using Models;
    using System;
    using System.Data.Entity;
    using System.Data.Entity.Migrations;
    using System.Data.Entity.ModelConfiguration;
    using System.Linq;


    internal sealed class Configuration : DbMigrationsConfiguration<ClassicGarage.DAL.GarageContext>
    {
        public Configuration()
        {
            AutomaticMigrationsEnabled = false;
            ContextKey = "ClassicGarage.DAL.GarageContext";
        }

        protected override void Seed(ClassicGarage.DAL.GarageContext context)
        {

            var owner = new OwnerModels
            {
                FirstName = "ABC",
                Lastname = "DEF",
                PhoneNo = 666666666,
                Email = "ABC@DEF.com"
            };

            context.Owner.Add(owner);
            context.SaveChanges();


            //  This method will be called after migrating to the latest version.

            //  You can use the DbSet<T>.AddOrUpdate() helper extension method 
            //  to avoid creating duplicate seed data. E.g.
            //
            //    context.People.AddOrUpdate(
            //      p => p.FullName,
            //      new Person { FullName = "Andrew Peters" },
            //      new Person { FullName = "Brice Lambson" },
            //      new Person { FullName = "Rowan Miller" }
            //    );
            //
        }
    }
}
