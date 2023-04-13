#include "main.h"
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - program that copies the content of a file to another file.
 * @exit_code:if you can not close a file descriptor.
 * @error_message: standard error.
 *
 * Return: 0 if sucess or exits on error.
 */
void print_error_and_exit(int exit_code, char* error_message) {
		    dprintf(STDERR_FILENO, "%s\n", error_message);
		        exit(exit_code);
	}

	int main(int argc, char* argv[]) {
		    int fd_from, fd_to;
		        ssize_t bytes_read, bytes_written;
			    char buffer[BUFFER_SIZE];

			        if (argc != 3) {
					        print_error_and_exit(97, "Usage: cp file_from file_to");
						    }
				    
				    fd_from = open(argv[1], O_RDONLY);
				        if (fd_from == -1) {
						      dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
								        exit(98);
									    }
					    
					    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
					        if (fd_to == -1) {
							        char error_message[100];
								        sprintf(error_message, "Error: Can't write to %s", argv[2]);
									        print_error_and_exit(99, error_message);
										    }
						    
						    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
							            bytes_written = write(fd_to, buffer, bytes_read);
								            if (bytes_written != bytes_read) {
										                print_error_and_exit(99, "Error: Failed to write to the output file");
												        }
									        }
						        
						        if (bytes_read == -1) {
								        print_error_and_exit(98, "Error: Failed to read from the input file");
									    }
							    
							    if (close(fd_from) == -1) {
								            char error_message[100];
									            sprintf(error_message, "Error: Can't close fd %d", fd_from);
										            print_error_and_exit(100, error_message);
											        }
							        
							        if (close(fd_to) == -1) {
									        char error_message[100];
										        sprintf(error_message, "Error: Can't close fd %d", fd_to);
											        print_error_and_exit(100, error_message);
												    }
								    
								    return 0;
	}

