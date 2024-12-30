#include <fcntl.h>  // For open()
#include <unistd.h> // For write() and close()
#include <stdio.h>  // For perror()

int main() {
    int fd;
    const char *message = "Hello, this is a test message.\n";

    // Open the file for writing (create if it doesn't exist, truncate if it does)
    fd = open("output.txt", O_WRONLY | O_CREAT , 064);

    if (fd == -1) {
        perror("Error opening file");
        return 1; // Exit with error
    }

    // Write the message to the file
    ssize_t bytes_written = write(fd, message, sizeof(message));

    if (bytes_written == -1) {
        perror("Error writing to file");
        close(fd); // Clean up
        return 1; // Exit with error
    }

    printf("Successfully wrote %ld bytes to the file.\n", bytes_written);

    // Close the file
    close(fd);

    return 0; // Exit successfully
}

