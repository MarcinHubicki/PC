using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace ClassicGarage.Models
{
    public class RepairModels
    {
        public int ID { get; set; }
        public int CarID { get; set; }

        [Required]
        public string Name { get; set; }


        public string Description { get; set; }

        [Required]
        public int RepairCost { get; set; }

        //relacja wiele do wielu ? 
        public virtual CarModels Car { get; set; }
    }
}