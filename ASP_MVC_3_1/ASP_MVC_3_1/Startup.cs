using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(ASP_MVC_3_1.Startup))]
namespace ASP_MVC_3_1
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
