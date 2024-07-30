using ASP101.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

namespace ASP101.Pages {

    public class IndexModel : PageModel
    {
        public List<Entities> Students {get; set;}
        private readonly ILogger<IndexModel> _logger;

        public IndexModel(ILogger<IndexModel> logger)
        {
            _logger = logger;
        }

        public void OnGet()
        {
            Students = new List<Entities> {
                new Product {stud_id = 101, stud_name = "one name", stud_course = "one course"},
                new Product {stud_id = 102, stud_name = "two name", stud_course = "two course"},
                new Product {stud_id = 103, stud_name = "thre name", stud_course = "three course"}
            };
        }
    }
}