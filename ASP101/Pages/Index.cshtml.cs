using ASP101.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.Extensions.Logging;
using System.Collections.Generic;

namespace ASP101.Pages {

    public class IndexModel : PageModel
    {
        public List<Entities> Students {get; set;}
        private readonly ILogger<IndexModel> _logger;

        public IndexModel(ILogger<IndexModel> logger)
        {
            _logger = logger;
            Students = new List<Entities>();
        }

        public void OnGet()
        {
            Students = new List<Entities> {
                new Entities {stud_id = 101, stud_name = "one name", stud_course = "one course"},
                new Entities {stud_id = 102, stud_name = "two name", stud_course = "two course"},
                new Entities {stud_id = 103, stud_name = "three name", stud_course = "three course"}
            };
        }
    }
}