namespace varya
{
    int add(int a, int b)
    {
        int result = a + b;
        return result;
    }

    int sub(int c, int d)
    {
        int result = c - d;
        return result;
    }

    int mult(int a, int b)
    {
        int result = a * b;
        return result;
    }

    int div(int a, int b)
    {
        if (b == 0)
        {
            std::cout << "Division by zero is not allowed\n";
            return -1;
        }

        return a / b;
    }
}
