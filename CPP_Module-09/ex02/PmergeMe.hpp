/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:42:04 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/26 16:20:52 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>
#include <ctime>
#include <cstdlib>

class PmergeMe
{
    public:
        PmergeMe(void);
        PmergeMe(const PmergeMe &other);
        ~PmergeMe(void);

        PmergeMe    &operator=(const PmergeMe &rhs);

        void    exec(int argc, char **argv);
        void    ParseNbr(int argc, char **argv);
        
        template <typename Container>
        void    displayContainer(const Container& container);

        template <typename Container>
        void    mergeInsertSort(Container& container);




    private:
       // std::vector<int> _sequence;
        std::vector<int> _sequenceVec;
        std::list<int> _sequenceList;
        clock_t _startVec;
        clock_t _endVec;
        clock_t _startList;
        clock_t _endList;

};

#endif