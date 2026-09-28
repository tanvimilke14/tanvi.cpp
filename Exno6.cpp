#include <iostream>
using namespace std;

int main()
{
    int totalFrames;
    int frame = 0;
    int received;
    int ack;

    cout << "Enter the total number of frames to be transmitted: ";
    cin >> totalFrames;

    cout << "\n--- Stop and Wait ARQ Protocol ---\n";

    while (frame < totalFrames)
    {
        // Step 1: Transmit the frame
        cout << "\nSending Frame " << frame << "...\n";

        // Check whether frame is received
        cout << "Did Frame " << frame
             << " reach the receiver? (1 = Yes, 0 = No): ";
        cin >> received;

        // If frame is lost
        if (received == 0)
        {
            cout << "Frame " << frame << " was lost!\n";
            cout << "Timeout occurred.\n";
            cout << "Retransmitting Frame " << frame << "...\n";

            // Send the same frame again
            continue;
        }

        cout << "Frame " << frame << " received successfully.\n";

        // Receiver sends ACK
        int ackNumber = (frame + 1) % 2;

        cout << "Did ACK " << ackNumber
             << " arrive at the sender? (1 = Yes, 0 = No): ";
        cin >> ack;

        // If ACK is lost
        if (ack == 0)
        {
            cout << "ACK " << ackNumber << " was lost!\n";
            cout << "Timeout occurred.\n";
            cout << "Retransmitting Frame " << frame << "...\n";

            // Same frame will be sent again
            continue;
        }

        // ACK received
        cout << "ACK " << ackNumber << " received successfully.\n";
        cout << "Moving to the next frame.\n";

        frame++;
    }

    cout << "\nAll " << totalFrames
         << " frames transmitted successfully!\n";

    cout << "Stop-and-Wait ARQ completed.\n";

    return 0;
}
