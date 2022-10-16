class Perfectsquarenumber(object):
    def numSquares(self,n):
        if(n == 0):
            return 0
        if(n == 1):
            return 1
        squares = self.findSquares(n) 
        rows = len(squares)
        cols = n + 1
        mat = []
        for i in range(rows):
            mat.append([0] * cols)

        for i in range(cols):
            mat[0][i] = i

        for i in range(rows):
            mat[i][0] = 0

        min = mat[0][cols - 1]
        for i in range(1,rows):
            for j in range(1,cols):
                if(j < squares[i]):
                    mat[i][j] = mat[i - 1][j]

                else:
                    mat[i][j] = self.min(mat[i - 1][j], (j // squares[i] + (mat[i][j % squares[i]])))
                if(j == cols - 1 and mat[i][j] < min):
                    min = mat[i][j]
        return min
    def min(self,a,b):
        if(a <= b):
            return a
        else:
            return b
    def findSquares(self,n):
        i = 1
        squares = []
        while (i * i <= n):
            squares.append(i * i)
            i = i + 1
        return squares
x = Perfectsquarenumber()

print(x.numSquares(43))

# code by rufus paul
