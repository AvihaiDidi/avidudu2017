/*
 * GameManager.h class for managing all running games
 */

#ifndef HEADERSS_GAMEMANAGER_H_
#define HEADERSS_GAMEMANAGER_H_

#include <string>
#include <vector>
#include "Server.h"

using namespace std;
/*
 * a struct representing a game
 * name = game name
 * playerSocket = sockets to write to
 * status = true if game started. false otherwise
 */
struct Games {
	string name;
	int player1Socket,player2Socket;
	bool status;
};

class GameManager {

public:
	GameManager();
	vector<Games> getGames();
	bool addGame(string name, int player1Socket);
	bool startGame(string name, int player2Socket);
	void closeGame(string name, Server server);
	vector<int> getAllPlayers();
	~GameManager();

private:
	vector<Games> games;
};


#endif /* HEADERSS_GAMEMANAGER_H_ */