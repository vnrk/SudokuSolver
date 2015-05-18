

#ifndef SUDOKU_H
#define	SUDOKU_H

#ifdef	__cplusplus
extern "C" {
#endif

    int evaluate();
    void updateInitialValue(int row,int col,int val);
    void dumpResultMatrix();
    int verify();
    void initialize();

#ifdef	__cplusplus
}
#endif
#endif	/* SUDOKU_H */

