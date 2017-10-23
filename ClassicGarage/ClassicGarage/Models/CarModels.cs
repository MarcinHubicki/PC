using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace ClassicGarage.Models
{
    public class CarModels
    {
        public int ID { get; set; }

        [Required]
        public string Make { get; set; }

        [Required]

        public string Model { get; set; }
        [Required]

        public int Year { get; set; }

        [Required]
        public int VIN { get; set; }

        [Required]
        public string Name { get; set; }


        public string Photo { get; set; }

        [Required]

        public DateTime PurchaseDate { get; set; }

        public DateTime SaleDate { get; set; }

        [Required]
        public int PurchasePrice { get; set; }


        public int SalePrice { get; set; }

        public int OwnerID { get; set; }


        public virtual OwnerModels Owner { get; set; }
    }
}