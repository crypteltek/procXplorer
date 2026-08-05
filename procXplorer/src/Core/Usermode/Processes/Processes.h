#pragma once






struct PCinfo
{
	std::string		ComputerName;	// Current pc name (recorded at launch stored in ram)
	std::string		DisplayName;	// DisplayName of pc (recorded at launch stored in ram)
	std::string		GpuName;		// Name of the gpu (Ex : Ryzen RTX 3070TI)
	std::string		CpuName;		// Name of the cpu (Ex : Ryzen i7 11700kf)
	std::string		WindowsVer;		// Windows version (Ex : Windows 11 25h2 (OS Buiuld xxxxx.xxxx)
	std::string		OrgName;		// organisation name (The one in winver at the bottom)

};


enum class ProcessState : uint8_t
{
	New,        // just appeared this scan
	Active,     // normal running state  
	Dying,      // about to be removed (grace period for UI highlight)
	Dead        // remove from map next cycle
};


struct ProcessRecord
{
	ProcessInfo         info;           // static-ish info (rarely changes)
	UpdateProcessInfo   metrics;        // hot data, updated every tick
	ProcessState        state;
	uint64_t            firstSeenTick;  // when we first saw this pid
	uint64_t            lastSeenTick;   // last scan it was alive
};


struct ProcessInfo
{
	std::string		ProcessName;	// process name string
	std::wstring	WProcessName;   // process name wide string (just in case)
	std::string		ExeName;		// executable name on disk (optional no clue if required)
	std::string		Description;	// process description (optional "null" if none)

	std::string		Architecture;	// CPU architecture ("x86", "x64", "ARM64")
	std::string		ImagePath;		// path where the process is
	std::string		LaunchArg;		// execution arguments
	std::string		owner;			// execution owner (EX NT AUTHORITY\SYSTEM or DOMAIN\Username)
	std::string		ThreadState;	// current thread state (running, waiting, ready, terminated)
	std::string		WaitReason;		// reason for current wait (optional "null" if not waiting)
	std::string		ProcessSigner;	// Signer of process if file on disk is signed (optional "null" if none)


	int32_t			ppid;			// parent process id (optional) (-1 if none)
	uint32_t		pid;			// process id
	uint32_t		tid;			// main thread id
	uint32_t		Sessid;			// Session 0 (Services) vs 1+ (User)



	uint64_t		BaseAddress;	// base adress
	uint64_t		ImageSize;		// size of original image


	bool IsElevated;				// is process elevated token
	bool IsSigned;					// is the file on disk signed
};



struct UpdateProcessInfo  // info like ram usage and others that need to be frequently updated
{



	uint64_t	RamUsage;		// current utilization of ram (at time of update)
	uint64_t	MaxRamUsage;	// max recorded ram utilization 
	float		CpuUsage;		// current cpu usage % (over 5 measured seconds)
	float		MaxCpuUsage;	// max recorded cpu usage %
	int			ThreadCount;	// Current Thread count
	int			HandleCount;	// Current Handle count





};



std::unordered_map<uint32_t, ProcessRecord> processTable;



// TOADD
// CPU USAGE PER THREAD
// DLL'S
// HANDLEINFO
// MEMORY INFO
// NETWORK SHIT
// SECURITY INFO
// ADD SUPPORT FOR MULTIPLE GPUS
