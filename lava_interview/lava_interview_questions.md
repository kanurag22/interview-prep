
Create a lock mutex and just write it syntax

what is binary semaphore and mutex difference between them

what is priority in mutex 

what is context switching 

what is fork

what is multithreading 

what is multiprocessing 


create a doubly linked list and reverse it 

impletment sizeof function in c

write the outout of the following programme

====================================================

imp int func()
    
    {

        int a;
        
        char b;
        
        return sizeof(a) == sizeof(a+b);
    
    }

Analysis:

sizeof(a): The size of an int, typically 4 bytes on most architectures.

sizeof(a + b):

a is an int, and b is a char.

a + b: The char is promoted to int (integer promotion) before the addition. The result of the addition is also an int.

sizeof(a + b): This evaluates to sizeof(int).

Output:

sizeof(a) == sizeof(a + b) evaluates to 1 (true) because both sizes are equal.

======================================================

    
    struct node
        {
            int a ;
            char b;
        }node;
        sizeof(node);


=======================================================

    
    int main()
    {
        const char *func();
        const char *p;
        p = func();
        *p = 'a';
        printf("%s\n",p);
    }
    const char* func()
        {
            return "LAVA";
        };

=======================================================

    
    int fun()
    {
        i = 16;
        return ((((i << i) >= i) << i) >> i) <= i);
    }


