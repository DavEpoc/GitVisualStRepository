

class Getabbigliamentobase : public Getkitindumenti
{
public:
	// class management
	Getabbigliamentobase() = default;
	virtual ~Getabbigliamentobase() = default;
	Getabbigliamentobase(const Getabbigliamentobase &copy) = delete;
	Getabbigliamentobase &operator=(const Getabbigliamentobase &other) = delete;

	// class methods
	Poolkitindumenti* getdresskitindumenti();
private:
};

class Getabbigliamentoinvernale: public Getkitindumenti
{
public:
	// class management
	Getabbigliamentoinvernale() = default;
	virtual ~Getabbigliamentoinvernale() = default;
	Getabbigliamentoinvernale(const Getabbigliamentoinvernale &copy) = delete;
	Getabbigliamentoinvernale &operator=(const Getabbigliamentoinvernale &other) = delete;

	// class methods
	Poolkitindumenti* getdresskitindumenti();
private:
};

class Getabbigliamentoestivo : public Getkitindumenti
{
public:
	// class management
	Getabbigliamentoestivo() = default;
	virtual ~Getabbigliamentoestivo() = default;
	Getabbigliamentoestivo(const Getabbigliamentoestivo &copy) = delete;
	Getabbigliamentoestivo &operator=(const Getabbigliamentoestivo &other) = delete;

	// class methods
	Poolkitindumenti* getdresskitindumenti();
private:
};

