using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Design_Patterns
{
    abstract class EngineStore // We have engine store as abstract class
    {
        protected abstract IEngine CreateEngine(string type); // We leave the implementation to the lower classes. (Factory Method)

        public IEngine OrderEngine(string type)
        {
            IEngine engine = CreateEngine(type);

            return engine;
        }
    }
}
