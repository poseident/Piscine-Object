#include "../includes/Secretary.hpp"
#include "../includes/CourseFinishedForm.hpp"
#include "../includes/Form.hpp"
#include "../includes/Headmaster.hpp"


int main()
{
    Secretary secretary("giselle");
    Headmaster headmaster("jean");

    Form *CourseFinished = secretary.createForm(FormType::CourseFinished);

    
    CourseFinished->execute();

}