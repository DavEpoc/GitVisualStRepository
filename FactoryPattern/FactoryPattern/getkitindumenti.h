
class Getkitindumenti : public Indumenti
{
public:
	// class management
	Getkitindumenti() = default;
	~Getkitindumenti() = default;
	Getkitindumenti(const Getkitindumenti &copy) = delete;
	Getkitindumenti &operator=(const Getkitindumenti &other) = delete;

	// class methods
	virtual Poolkitindumenti* getdresskitindumenti() = 0;
	void clean(){}; // devo dichiararlo per forza
	void dress(){}; // devo dichiararlo per forza

private:
};

// normalmente permette di identificare QUALE oggetto (capo) l'user , che ha accesso ad UNA sub-classe di questa interfaccia ,
// dargli,in funzione della sub-classe stessa in cui è e gli permette anche volendo di cambiare cosa ricevere
// però normalmente ritorno UN SOLO oggetto.

// con la classe pool sto cercando di ritornare l'oggetto pool, grande a piacere , per ritornare un kit di più oggetti!
// per ora sembra funzionare se rinuncio al virtualismo TOTALE della classe Indumenti (ho bisogno di mettervi e descrivervi un *next!)