template<typename T> class MyObject
{
public:
    MyObject() : myVal( 5 ) {}
    T myVal;
};

int main()
{
    // The following objects can be parsed by natvis
    MyObject<int> myWorks1;
    MyObject<signed> myWorks14;
    MyObject<signed int> myWorks7;
    MyObject<unsigned int> myWorks8;

    MyObject<long> myWorks30;
    MyObject<long int> myWorks31;
    MyObject<signed long> myWorks33;
    MyObject<signed long int> myWorks34;

    MyObject<short> myWorks10;
    MyObject<signed short> myWorks11;
    MyObject<unsigned short> myWorks12;

    MyObject<signed long> myWorks4;
    MyObject<double> myWorks5;
    MyObject<float> myWorks6;

    MyObject<char> myWorks20;
    MyObject<signed char> myWorks21;
    MyObject<unsigned char> myWorks22;

    // The following objects fail to be parsed by natvis
    MyObject<unsigned long> myFail1;
    MyObject<unsigned long int> myFail2;

    MyObject<long long> myFail10;
    MyObject<long long int> myFail11;
    MyObject<signed long long> myFail12;
    MyObject<signed long long int> myFail13;
    MyObject<unsigned long long> myFail14;
    MyObject<unsigned long long int> myFail15;

    MyObject<long double> myFail4;

    return 0;
}