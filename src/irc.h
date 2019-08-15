// Copyright (c) 2009 Satoshi Nakamoto
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

//# 
extern bool RecvLine(SOCKET hSocket, string& strLine);
//# Main IRC Loop, called in net.cpp:StartNode()
//# Functionality is to keep the peer db full
extern void ThreadIRCSeed(void* parg);
//# An unused variable for restarting the IRC seed server
extern bool fRestartIRCSeed;
