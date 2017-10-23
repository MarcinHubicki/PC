using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace ClassicGarage.Models
{
    public class OwnerModels
    {
        public int ID { get; set; }

        [Required]
        public string FirstName { get; set; }

        [Required]
        public string Lastname { get; set; }

        [Required]
        public int PhoneNo { get; set; }

        [EmailAddress]
        public string Email { get; set; }


        public virtual ICollection<CarModels> Cars { get; set; }

    }
}