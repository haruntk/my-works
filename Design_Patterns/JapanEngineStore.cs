using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Design_Patterns
{
    class JapanEngineStore : EngineStore
    {
        protected override IEngine CreateEngine(string type) // For Japan there's Toyota and Mitsubishi
        {
            Console.WriteLine("Japan Store");
            return type switch
            {
                "toyota" => new ToyotaEngine(),
                "mitsubishi" => new MitsubishiEngine(),
                _ => throw new ArgumentException("Invalid engine type : " + type)
            };
        }
    }
}
