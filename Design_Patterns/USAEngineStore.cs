using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Design_Patterns
{
    class USAEngineStore : EngineStore
    {
        protected override IEngine CreateEngine(string type) // For US there's Ford
        {
            Console.WriteLine("USA Store");
            return type switch
            {
                "ford" => new FordEngine(),
                _ => throw new ArgumentException("Invalid enginwe type : " + type),
            };
        }
    }
}
