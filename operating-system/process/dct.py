##############################
# NE PAS MODIFIER CE FICHIER #
##############################
import sys
import struct
import numpy
import scipy.fftpack

def apply_transform(matrix, axis):
    return scipy.fftpack.dct(matrix, axis=axis)

if __name__== "__main__":
    axis = struct.unpack('I', sys.stdin.buffer.read(4))[0]
    size_x = struct.unpack('I', sys.stdin.buffer.read(4))[0]
    size_y = struct.unpack('I', sys.stdin.buffer.read(4))[0]

    matrix = numpy.zeros((size_x, size_y))
    for j in range(size_y):
        for i in range(size_x):
            matrix[j][i] = struct.unpack('d', sys.stdin.buffer.read(8))[0]

    matrix = apply_transform(matrix, axis)
    for j in range(size_y):
        for i in range(size_x):
            sys.stdout.buffer.write(struct.pack('d', matrix[j][i]))

    sys.stdin.close()
    sys.stdout.close()
