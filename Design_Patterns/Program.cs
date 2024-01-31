using Design_Patterns;
using System;
class Program
{
    static void Main()
    {
        try
        {
            Car car = Car.getInstance(); // Singleton
            EngineStore japanEngineStore = new JapanEngineStore(); // We can order from Japan or USA
            EngineStore usaEngineStore = new USAEngineStore();
            
            car.engine = japanEngineStore.OrderEngine("toyota"); // Ordered Toyota Engine from Japan Store
            car.engine.Start();
            car.engine.Stop();
        }
        catch (Exception ex)
        {
            Console.WriteLine(ex.Message);
        }
    }
}