using SOLID_Principles.Entities;
using SOLID_Principles.Interfaces;
using SOLID_Principles.Services;
using System;
using System.Collections.Generic;

public class Program // A food restaurant application using SOLID
{
    public static void Main()
    {
        SalaryCalculator salaryCalculator = new SalaryCalculator(); // For calculate salary I have salary calculator
        Manager manager = new Manager(); // For workers I have Worker class (SRP)
        Employee employee = new Employee();
        Chef chef = new Chef();
        Waiter waiter = new Waiter();
        FoodService foodService = new FoodService(chef, waiter); // Food service for serve and cook food
        foodService.CookFood();
        foodService.TakeFood();
        manager.Work(300);
        employee.Work(300);
        chef.Work(300);
        waiter.Work(300);
        Console.WriteLine(salaryCalculator.CalculateSalary(employee));
        Console.WriteLine(salaryCalculator.CalculateSalary(manager));
        Console.WriteLine(salaryCalculator.CalculateSalary(chef));
        Console.WriteLine(salaryCalculator.CalculateSalary(waiter));
    }
}