class Form
{
private:
	FormType _formType;

public:
	Form(FormType p_formType)
	{

	}

	virtual void execute() = 0;
};