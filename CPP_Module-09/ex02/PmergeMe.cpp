/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:43:50 by gussoare          #+#    #+#             */
/*   Updated: 2023/06/28 14:34:14 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    return ;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    this->operator=(other);
}

PmergeMe::~PmergeMe(void)
{
    return ;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    (void)rhs;
    return *this;
}

template <typename Container>
void PmergeMe::mergeInsertSort(Container& container)
{
    if (container.size() <= 1)
        return;

    Container left;
    Container right;
    typename Container::iterator it = container.begin();
    size_t size = container.size();
    size_t i;

    for (i = 0; i < size / 2; ++i)
    {
        left.push_back(*it);
        ++it;
    }

    for (; i < size; ++i)
    {
        right.push_back(*it);
        ++it;
    }

    mergeInsertSort(left);
    mergeInsertSort(right);

    container.clear();
    typename Container::iterator leftIt = left.begin();
    typename Container::iterator rightIt = right.begin();

    while (leftIt != left.end() && rightIt != right.end())
    {
        if (*leftIt < *rightIt)
        {
            container.push_back(*leftIt);
            ++leftIt;
        }
        else
        {
            container.push_back(*rightIt);
            ++rightIt;
        }
    }

    container.insert(container.end(), leftIt, left.end());
    container.insert(container.end(), rightIt, right.end());
}

template <typename Container>
void PmergeMe::displayContainer(const Container& container)
{
    typename Container::const_iterator it;
    for (it = container.begin(); it != container.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::ParseNbr(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
    {
        int num = std::atoi(argv[i]);
        if (num > 0)
        {
            this->_sequenceVec.push_back(num);
            this->_sequenceList.push_back(num);
        }
        else 
            throw std::runtime_error("Error: All numbers must be positive integers");
    }
    if (this->_sequenceVec.empty())
        throw std::runtime_error("Error: No valid positive integers provided");
    std::cout << "Before: ";
    displayContainer(this->_sequenceVec);
}


void PmergeMe::exec(int argc, char **argv)
{
    ParseNbr(argc, argv);
    this->_startVec = clock();
    mergeInsertSort(this->_sequenceVec);
    this->_endVec = clock();

    std::cout << "after: ";
    displayContainer(this->_sequenceVec);
    double timeVector = static_cast<double>(this->_endVec - this->_startVec) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << argc - 1  << " elements with std::vector : " << timeVector << " seconds" << std::endl;

    this->_startList = clock();
    mergeInsertSort(this->_sequenceList);
    this->_endList = clock();

    double timeList = static_cast<double>(this->_endList - this->_startList) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << timeList << " seconds" << std::endl;
}
