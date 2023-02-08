#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    //Test case1:
    // try
    // {
    //     Bureaucrat bureaucrat("Joseph", -1);
    // }
    // catch(Bureaucrat::GradeTooHighException &e){
    //     std::cout << "Too High Exception" << std::endl; }
    // catch(Bureaucrat::GradeTooLowException &e){
    //     std::cout << "Too Low Exception" << std::endl; }
    

    //Test Case2:
    try
    {
        Bureaucrat bureaucrat("Emanuel", 79);
        Form form("President Form", 80, 20);
        form.haveYouSign(bureaucrat);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e){
        std::cerr << "Too High Exception" << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e){
        std::cerr << "Too Low Exception" << std::endl;
    }
    return (0);
}