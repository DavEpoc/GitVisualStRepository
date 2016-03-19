
class Poolkitindumenti : public Indumenti
{
public:
	// class management
	Poolkitindumenti();
	~Poolkitindumenti() = default;
	Poolkitindumenti(const Poolkitindumenti &copy) = delete;
	Poolkitindumenti &operator=(const Poolkitindumenti &other) = delete;

	// class methods
	 void addCapoIntoPool(Indumenti* capoaggiunto);
	 Indumenti* getHead() const;
	 void clean() { std::cout << std::endl; };  // devo dichiararlo per forza
	 void dress() {};                           // devo dichiararlo per forza
private:
	Indumenti *head;
	//Indumenti *tail;
	//Indumenti *current;
	//Indumenti* indumenti;
};

Poolkitindumenti::Poolkitindumenti()
{
	head = nullptr;
	//tail = nullptr;
	//current = nullptr;
}

// Poolkitindumenti cpp

Indumenti* Poolkitindumenti::getHead() const
{
	return head;
}


void Poolkitindumenti::addCapoIntoPool(Indumenti* capoaggiunto)
{
	capoaggiunto->setNext(head);
	head = capoaggiunto;
}