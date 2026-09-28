#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;

    cout << "Enter number of frames to transmit: ";
    cin >> n;

    srand(time(0));

    cout << "\n--- Stop and Wait ARQ ---\n";

    int i = 0;

    while (i < n) {
        cout << "\nSender: Sending Frame " << i << endl;

        // Generate random event
        int event = rand() % 4;

        if (event == 0) {
            // Frame lost
            cout << "Receiver: Frame " << i << " lost!" << endl;
            cout << "Sender: Timeout!" << endl;
            cout << "Sender: Retransmitting Frame " << i << "..." << endl;
        }
        else if (event == 1) {
            // ACK lost
            cout << "Receiver: Frame " << i << " received." << endl;
            cout << "Receiver: ACK " << i << " lost!" << endl;
            cout << "Sender: Timeout!" << endl;
            cout << "Sender: Retransmitting Frame " << i << "..." << endl;
        }
        else {
            // Successful transmission
            cout << "Receiver: Frame " << i
                 << " received successfully." << endl;

            cout << "Receiver: Sending ACK " << i << endl;

            cout << "Sender: ACK " << i
                 << " received." << endl;

            i++;  // Move to next frame
        }
    }

    cout << "\nAll " << n
         << " frames transmitted successfully!" << endl;

    return 0;
}
