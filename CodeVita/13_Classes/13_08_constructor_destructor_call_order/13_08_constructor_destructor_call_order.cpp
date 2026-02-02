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

int main()
{
    Dog dog1("Doggy1", "Shepherd", 2);
    Dog dog2("Doggy2", "Shepherd", 3);
    Dog dog3("Doggy3", "Shepherd", 5);
    Dog dog4("Doggy4", "Shepherd", 1);
    return 0;
}