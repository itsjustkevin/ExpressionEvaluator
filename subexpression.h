class SubExpression : public Expression

{

public:

	//constructor

	SubExpression(Expression* left, Expression* right);

	//declare a static function parse()

	static Expression* parse(stringstream& in);

protected:

	//declare the variables

	Expression* left;

	Expression* right;

};