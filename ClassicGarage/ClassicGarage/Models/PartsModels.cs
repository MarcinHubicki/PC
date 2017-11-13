using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace ClassicGarage.Models
{
    public class PartsModels
    {
        public int ID { get; set; }

        public int CarID { get; set; }

        [Required]
        public string Name { get; set; }

        [Required]
        public int CatalogNo { get; set; }

        [Required]
        public int PurchasePrice { get; set; }

        [Required]
        public int SalePrice { get; set; }

        [Required]
        public DateTime PurchaseDate { get; set; }

        public DateTime SaleDate { get; set; }

        //relacja wiele do wielu ? 
        public virtual CarModels Car { get; set; }

    }
}