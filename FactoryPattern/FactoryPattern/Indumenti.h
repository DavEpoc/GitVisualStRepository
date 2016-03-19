
class Indumenti
{
public:

	// class management
	Indumenti();
	~Indumenti() = default;
	Indumenti(const Indumenti &copy) = delete;
	Indumenti &operator=(const Indumenti &other) = delete;

	// class methods

	virtual void clean() = 0;
	virtual void dress() = 0;
		  void setNext(Indumenti* value); // implementazione pool
		  Indumenti* getNext() const;
private:
	Indumenti *next;
};

Indumenti::Indumenti()
{
	next = nullptr;
}

//cpp indumenti

Indumenti* Indumenti::getNext() const
{
	return next;
}

void Indumenti::setNext(Indumenti* value)
{
	next = value;
}