#ifndef NAMESPACECLASSSTATICMEMBER
#define NAMESPACECLASSSTATICMEMBER

#include <string>
using std::string;

namespace Tjisana{

    class Human{
        private:
            string name;
            unsigned int age;
        public:
            virtual void speak() const =0;
            Human();
            virtual ~Human();
            Human(const Human& human):name(human.name),age(human.age){}
            Human& operator = (const Human& human);


    };
}
#endif