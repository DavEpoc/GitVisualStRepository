class Maglia : public Indumenti
{
public:
	// class management
	Maglia() = default;
	~Maglia() = default;
	Maglia(const Maglia &copy) = delete;
	Maglia &operator=(const Maglia &other) = delete;

	// class methods
	void clean();
	void dress();
private:
};

class Pantaloni : public Indumenti
{
public:
	// class management
	Pantaloni() = default;
	virtual ~Pantaloni() = default;
	Pantaloni(const Pantaloni &copy) = delete;
	Pantaloni &operator=(const Pantaloni &other) = delete;

	// class methods
	void clean();
	void dress();
private:
};

class Scarpe : public Indumenti
{
public:
	// class management
	Scarpe() = default;
	virtual ~Scarpe() = default;
	Scarpe(const Scarpe &copy) = delete;
	Scarpe &operator=(const Scarpe &other) = delete;

	// class methods
	void clean();
	void dress();
private:
};

class Costume : public Indumenti
{
public:
	// class management
	Costume() = default;
	virtual ~Costume() = default;
	Costume(const Costume &copy) = delete;
	Costume &operator=(const Costume &other) = delete;

	// class methods
	void clean();
	void dress();
private:
};

class Cappotto : public Indumenti
{
public:
	// class management
	Cappotto() = default;
	virtual ~Cappotto() = default;
	Cappotto(const Cappotto &copy) = delete;
	Cappotto &operator=(const Cappotto &other) = delete;

	// class methods
	void clean();
	void dress();
private:
};