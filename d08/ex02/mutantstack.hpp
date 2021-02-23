#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stdexcept>
# include <stack>

template<class T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::stack<T>::continer_type::iterator iterator;
        typedef typename std::stack<T>::continer_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::continer_type::const_iterator const_iterator;
        typedef typename std::stack<T>::continer_type::const_reverse_iterator const_reverse_iterator;

        MutantStack(void);
        MutantStack( MutantStack const & );
        MutantStack & operator=( MutantStack const & );
        ~MutantStack( void );

        iterator begin();
        iterator end();
        reverse_iterator rbegin();
        reverse_iterator rend();
        const_iterator cbegin();
        const_iterator cbegin();
        const_reverse_iterator crbegin();
        const_reverse_iterator crend();

};

#endif