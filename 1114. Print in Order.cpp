1114. Print in Order

class Foo {
public:
    int curval;
    std :: mutex mtx;
    Foo() {
        curval = 1;
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        mtx.lock();
        curval++;
        mtx.unlock();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        mtx.lock();
        while(curval != 2)
        {
            mtx.unlock();
            mtx.lock();
        }
        mtx.unlock();
        printSecond();
        curval++;
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
   
        mtx.lock();
        while(curval != 3)
        {
            mtx.unlock();
            mtx.lock();
        }
        mtx.unlock();
        printThird();
        curval++;
    }
};