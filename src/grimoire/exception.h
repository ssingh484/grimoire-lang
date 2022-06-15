class GrimException : public std::exception {

public:
    GrimException(const std::string &message) : message(message) { }

    const std::string &getMessage() const {
        return message;
    }

private:
    const std::string message;
};