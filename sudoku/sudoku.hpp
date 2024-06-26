//
//  sudoku.hpp
//  sudoku
//
//  Created by Carr O'Connor on 6/26/24.
//

#ifndef sudoku_hpp
#define sudoku_hpp
#pragma once
#include <string>
#include <iostream>
#include <stdio.h>

class sudoku {
    public:
        sudoku(std::string);
        void print();
        void solve();
        friend std::ostream& operator<<(std::ostream&, const sudoku&);
    private:
        int board [9][9];
        std::string filename;
};

#endif /* sudoku_hpp */
