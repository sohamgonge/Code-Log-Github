#include <iostream>
#include <string_view>

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();
    const std::string get_name() const;
    const std::string get_breed() const;
    const int get_age() const;

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};

const std::string Dog::get_name() const
{
    return name;
}
const std::string Dog::get_breed() const
{
    return breed;
}
const int Dog::get_age() const
{
    return *p_age;
}

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for : " << name << std::endl;
}
Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}
// void some_func(){
//     Dog my_dog("fluffy", "shepherd", 2);
// }
// void some_func(Dog &dog_param)
// {
//     std::cout << "This is what things got copied : " << std::endl;
//     std::cout << "name : " << dog_param.get_name() << std::endl;
//     std::cout << "name : " << dog_param.get_breed() << std::endl;
//     std::cout << "name : " << dog_param.get_age() << std::endl;
// }
void some_func()
{
    Dog* p_dog = new Dog("fluffy", "shepherd", 2);// will lead to memory leak will have to call destructor explicitly
    delete p_dog; // will call destructor
}
int main()
{
    // Dog dog("Fluffy", "Shepherd", 2);
    some_func();

    std::cout << "Done!" << std::endl;
    return 0;
}