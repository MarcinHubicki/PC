using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace ClassicGarage.Models
{
    public class AnnouncementTab
    {
        public int ID { get; set; }

        public int CarID { get; set; }

        
        
        public bool Status { get; set; }

        //relacja jeden do wielu ? 


    }
}