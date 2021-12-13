for i,v in next, game:GetService("Players").LocalPlayer.Character:GetDescendants() do
if v:IsA("BasePart") and v.Name ~="HumanoidRootPart" then 
game:GetService("RunService").Heartbeat:connect(function()
local PlayerInstance;
local sethiddenprop = (sethiddenproperty or set_hidden_property or sethiddenprop or set_hidden_prop)
local setsimulationrad = setsimulationradius or set_simulation_radius or function(Radius) sethiddenprop(PlayerInstance, "SimulationRadius", Radius) end
if not getgenv or not sethiddenprop or not setsimulationrad then return false end -- Not supported
if NETWORKOWNER then NETWORKOWNER:Disconnect() NETWORKPLAYERCHECK:Disconnect() NETWORKPLAYERCHECK2:Disconnect() end
getgenv().NETWORK_RADIUS = NETWORK_RADIUS or math.huge
v.Velocity = Vector3.new(19.9941, 0 ,19.9941)
v.RotVelocity = Vector3.new(0, 25, 0)
v.CanCollide = true
v.Massless = true
local RunService = game:GetService("RunService")
local Players = game:GetService("Players")
PlayerInstance = Players.LocalPlayer
ReanimateSettings = ReanimateSettings or {WeldHats = true, DoProxyCollision = false}
local WeldHats = ReanimateSettings.WeldHats
local Fling = ReanimateSettings.Fling
local ReloadCharacterScripts = ReanimateSettings.ReloadCharacterScripts
local DoProxyCollision = ReanimateSettings.DoProxyCollision
--Character
local p = game.Players.LocalPlayer
local c = p.Character
Bypass = "death"
loadstring(game:GetObjects("rbxassetid://5325226148")[1].Source)()
--Fake Character
local m = Instance.new("Model",c)
m.Name = "Fake Character"
local t = Instance.new("Part",m)
t.Name = "Torso"
t.Position = c.HumanoidRootPart.Position
local h = Instance.new("Part",m)
h.Name = "Head"
h.Position = c.HumanoidRootPart.Position
local hum = Instance.new("Humanoid",m)
for i,v in pairs(game.Players:GetChildren()) do
    if v.Character ~= nil and v ~= game.Players.LocalPlayer then
        if v.Character:FindFirstChild("Right Arm") then
            v.Character:FindFirstChild("Right Arm").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("Right Arm"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        elseif v.Character:FindFirstChild("RightHand") and v.Character:FindFirstChild("UpperTorso") then
            v.Character:FindFirstChild("RightHand").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("RightHand"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        end
    end
    v.CharacterAppearanceLoaded:Connect(function(char)
        if v.Character:FindFirstChild("Right Arm") then
            v.Character:FindFirstChild("Right Arm").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("Right Arm"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        elseif v.Character:FindFirstChild("RightHand") and v.Character:FindFirstChild("UpperTorso") then
            v.Character:FindFirstChild("RightHand").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("RightHand"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        end
    end)
end
 
game.Players.PlayerAdded:Connect(function(v)
wait()
    if v.Character ~= nil and v ~= game.Players.LocalPlayer then
        if v.Character:FindFirstChild("Right Arm") then
            v.Character:FindFirstChild("Right Arm").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("Right Arm"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        elseif v.Character:FindFirstChild("RightHand") and v.Character:FindFirstChild("UpperTorso") then
            v.Character:FindFirstChild("RightHand").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("RightHand"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        end
    end
    v.CharacterAppearanceLoaded:Connect(function(char)
        if v.Character:FindFirstChild("Right Arm") then
            v.Character:FindFirstChild("Right Arm").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("Right Arm"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        elseif v.Character:FindFirstChild("RightHand") and v.Character:FindFirstChild("UpperTorso") then
            v.Character:FindFirstChild("RightHand").ChildAdded:Connect(function(child)
                if child.Name == "RightGrip" then
                    wait(0.1)
                    if child.Part1 ~= nil then
                        if child.Part1.Parent ~= nil then
                            if child.Part1.Parent:IsA("Accessory") then
                                child:Destroy()
                            end
                        end
                    end
                end
            end)
            for i,v in pairs(v.Character:FindFirstChild("RightHand"):GetChildren()) do
                if v.Name == "RightGrip" then
                    wait(0.1)
                    if Part1 ~= nil then
                        if Part1.Parent ~= nil then
                            if v.Part1.Parent:IsA("Accessory") then
                                v:Destroy()
                            end
                        end
                    end
                end
            end
        end
    end)
end)
--Bypass
p.Character = m
wait(3)
p.Character = c
wait(3)
 
p.Character.Humanoid.Health = 0






















local MaidCreator = loadstring(game:HttpGet("https://pastebin.com/raw/2rKm8kKJ"))()
local Maid = MaidCreator.new()

local StarterGui = game:GetService("StarterGui")
local Camera = workspace.CurrentCamera
local Players = game:GetService("Players")
local Player = Players.LocalPlayer
local setsimulationradius = setsimulationradius or (sethiddenproperty and function(N) sethiddenproperty(Player, "SimulationRadius", N) end or function() end)
local Character = Player.Character or Player.CharacterAdded:Wait()

local Hats = {}
for _, Obj in next, Character:GetChildren() do -- Find hats.
    if Obj.ClassName == "Accessory" then
        Hats[Obj.Name] = Obj.Handle
    end
end

local Heartbeat = game:GetService("RunService").Heartbeat
local Stepped = game:GetService("RunService").Stepped
local RenderStepped = game:GetService("RunService").RenderStepped

local function wait(Duration) -- Fast wait implementation.
    Duration = Duration or 0 -- 1 render tick
    local T = os.clock()
    repeat RenderStepped:Wait() until os.clock() - T >= Duration
end

local Weld = loadstring(game:HttpGet("https://pastebin.com/raw/5TAPiShy"))()
if Character.Parent.ClassName == "Folder" and Character.Parent.Name == "Proxy" then
    return {Success = true, Message = "You are already reanimated", Hats = Hats, Weld = Weld, Wait = wait}
end

local Container = Instance.new("Folder")
Container.Name = "Proxy"
Container.Parent = Character

local RegdParts = {}
local function Register(Part)
    if type(Part) == "table" then
        for _, aPart in next, Part do
            if aPart:IsA("BasePart") then
                RegdParts[#RegdParts + 1] = aPart
            end
        end
    else
        RegdParts[#RegdParts + 1] = Part
    end
end

Maid(Heartbeat:Connect(function()
    setsimulationradius(1000) -- Max allowed simulation radius.
    for _, Part in next, RegdParts do
        Part.Velocity = Vector3.new(26, 0, 0) -- Keeps the part in a physical state so others can't claim it back.
    end
end))

for _, Motor in next, Character:GetDescendants() do -- Break the motors off except the Root and Neck motor. (RootJoint motor for R6)
	if Motor.ClassName == "Motor6D" and Motor.Name ~= "Neck" then
        Motor:Destroy()
	end
end

local Proxy = game:GetObjects("rbxassetid://7110839130")[1] -- I would clone, but since this is for both rig types I will not.
if DoProxyCollision then
    Maid(Stepped:Connect(function()
        for _, Part in next, Character:GetDescendants() do
            if Part:IsA("BasePart") and not Part:IsDescendantOf(Proxy) then
                Part.CanCollide = false
            end
        end
    end))
else
    Maid(Stepped:Connect(function()
        for _, Part in next, Character:GetDescendants() do
            if Part:IsA("BasePart") then
                Part.CanCollide = false
            end
        end
    end))
end

Proxy.Name = Player.Name
for _, Obj in next, Proxy:GetChildren() do
    if Obj:IsA("BasePart") then
        Obj.Transparency = 1
    end
end
Proxy.Parent = Container
Camera.CameraSubject = Proxy.Head
Proxy.Humanoid.BreakJointsOnDeath = false
Register(Character:GetChildren())
Proxy.HumanoidRootPart.CFrame = Character.HumanoidRootPart.CFrame

if Character:FindFirstChild("Animate") then -- Disable the character animator and clone one into the proxy.
    Character.Animate:Destroy()
end

for _, Anim in next, Character.Humanoid.Animator:GetPlayingAnimationTracks() do -- Stop all animations.
    Anim:Stop()
end

if Character.Humanoid.RigType == Enum.HumanoidRigType.R15 then
    local UpperTorsoAtt = Instance.new("Attachment", Proxy.Torso)
    UpperTorsoAtt.Name = "UpperTorsoAttachment"
    UpperTorsoAtt.Position = Vector3.new(0, 0.15, 0)

    local LowerTorsoAtt = Instance.new("Attachment", Proxy.Torso)
    LowerTorsoAtt.Name = "LowerTorsoAttachment"
    LowerTorsoAtt.Position = Vector3.new(0, -0.8, 0)

    local LUpperArmAttachment = Instance.new("Attachment", Proxy["Left Arm"])
    LUpperArmAttachment.Name = "UpperArmAttachment"
    LUpperArmAttachment.Position = Vector3.new(0, 0.4, 0)

    local LLowerArmAttachment = Instance.new("Attachment", Proxy["Left Arm"])
    LLowerArmAttachment.Name = "LowerArmAttachment"
    LLowerArmAttachment.Position = Vector3.new(0, -0.194, 0)

    local LHandAttachment = Instance.new("Attachment", Proxy["Left Arm"])
    LHandAttachment.Name = "HandAttachment"
    LHandAttachment.Position = Vector3.new(0, -0.85, 0)

    local RUpperArmAttachment = Instance.new("Attachment", Proxy["Right Arm"])
    RUpperArmAttachment.Name = "UpperArmAttachment"
    RUpperArmAttachment.Position = Vector3.new(0, 0.4, 0)

    local RLowerArmAttachment = Instance.new("Attachment", Proxy["Right Arm"])
    RLowerArmAttachment.Name = "LowerArmAttachment"
    RLowerArmAttachment.Position = Vector3.new(0, -0.194, 0)

    local RHandAttachment = Instance.new("Attachment", Proxy["Right Arm"])
    RHandAttachment.Name = "HandAttachment"
    RHandAttachment.Position = Vector3.new(0, -0.85, 0)

    local LUpperLegAttachment = Instance.new("Attachment", Proxy["Left Leg"])
    LUpperLegAttachment.Name = "UpperLegAttachment"
    LUpperLegAttachment.Position = Vector3.new(0, 0.4, 0)

    local LLowerLegAttachment = Instance.new("Attachment", Proxy["Left Leg"])
    LLowerLegAttachment.Name = "LowerLegAttachment"
    LLowerLegAttachment.Position = Vector3.new(0, -0.194, 0)

    local LFootAttachment = Instance.new("Attachment", Proxy["Left Leg"])
    LFootAttachment.Name = "FootAttachment"
    LFootAttachment.Position = Vector3.new(0, -0.85, 0)

    local RUpperLegAttachment = Instance.new("Attachment", Proxy["Right Leg"])
    RUpperLegAttachment.Name = "UpperLegAttachment"
    RUpperLegAttachment.Position = Vector3.new(0, 0.4, 0)

    local RLowerLegAttachment = Instance.new("Attachment", Proxy["Right Leg"])
    RLowerLegAttachment.Name = "LowerLegAttachment"
    RLowerLegAttachment.Position = Vector3.new(0, -0.194, 0)

    local RFootAttachment = Instance.new("Attachment", Proxy["Right Leg"])
    RFootAttachment.Name = "FootAttachment"
    RFootAttachment.Position = Vector3.new(0, -0.85, 0)

    Weld(Character.UpperTorso, UpperTorsoAtt)
    Weld(Character.LowerTorso, LowerTorsoAtt)
    Weld(Character.LeftUpperArm, LUpperArmAttachment)
    Weld(Character.LeftLowerArm, LLowerArmAttachment)
    Weld(Character.LeftHand, LHandAttachment)
    Weld(Character.RightUpperArm, RUpperArmAttachment)
    Weld(Character.RightLowerArm, RLowerArmAttachment)
    Weld(Character.RightHand, RHandAttachment)
    Weld(Character.LeftUpperLeg, LUpperLegAttachment)
    Weld(Character.LeftLowerLeg, LLowerLegAttachment)
    Weld(Character.LeftFoot, LFootAttachment)
    Weld(Character.RightUpperLeg, RUpperLegAttachment)
    Weld(Character.RightLowerLeg, RLowerLegAttachment)
    Weld(Character.RightFoot, RFootAttachment)
elseif Character.Humanoid.RigType == Enum.HumanoidRigType.R6 then
    Weld(Character.Torso, Proxy.Torso)
    Weld(Character["Left Arm"], Proxy["Left Arm"])
    Weld(Character["Right Arm"], Proxy["Right Arm"])
    Weld(Character["Left Leg"], Proxy["Left Leg"])
    Weld(Character["Right Leg"], Proxy["Right Leg"])
else -- If any future rigs come out...
    error("Rig not supported!")
end

local HatWeldDestination = Instance.new("Attachment", Proxy.Torso)
HatWeldDestination.Name = "HatWeldDst"

if WeldHats then
    Register(Hats)
    for _, Handle in next, Hats do
        local Att0 = Instance.new("Attachment", Handle)
        Att0.Name = "HatWeld"
        Att0.CFrame = Proxy.Torso.CFrame:ToObjectSpace(Handle.CFrame)
        Handle.Massless = true
        wait(0.05) -- random roblox bug made it so some hats wouldnt weld
        Handle:FindFirstChildOfClass("Weld"):Destroy()
    end
else
    for _, Handle in next, Hats do
        Handle:FindFirstChildOfClass("Weld"):Destroy()
    end
end

local Box;
if Fling then
    local Root = Character.HumanoidRootPart
    local Thrust = Instance.new("BodyThrust")
    Thrust.Name = "Flinger"
    Thrust.Force = Vector3.new(9e6, 9e6, 9e6)
    Thrust.Location = Vector3.new(0, 0, 500)
    Thrust.Parent = Root

    Box = Instance.new("SelectionBox")
    Box.Name = "View"
    Box.LineThickness = 0.1
    Box.Color3 = Color3.new(1, 0, 0)
    Box.Adornee = Root
    Box.Parent = Root

    Weld(Root, Proxy.HumanoidRootPart, true, false)
else
    Weld(Character.HumanoidRootPart, Proxy.HumanoidRootPart)
end

Maid(Heartbeat:Connect(function()
    Character.Head.CFrame = Proxy.Torso.CFrame * CFrame.new(0, 1.5, 0)
    if Character.Humanoid.RigType == Enum.HumanoidRigType.R6 then-- Jitter fix for only R6 because im lazy.
        if Character:FindFirstChild("Torso") then Character.Torso.CFrame = Proxy.Torso.CFrame end
        if Character:FindFirstChild("Left Arm") then Character["Left Arm"].CFrame = Proxy["Left Arm"].CFrame end
        if Character:FindFirstChild("Right Arm") then Character["Right Arm"].CFrame = Proxy["Right Arm"].CFrame end
        if Character:FindFirstChild("Left Leg") then Character["Left Leg"].CFrame = Proxy["Left Leg"].CFrame end
        if Character:FindFirstChild("Right Leg") then Character["Right Leg"].CFrame = Proxy["Right Leg"].CFrame end
    end
    for Index, Handle in next, Hats do
        if not Handle:FindFirstChild("HatWeld") then Hats[Index] = nil end
        Handle.CFrame = Proxy.Torso.CFrame * Handle.HatWeld.CFrame -- Set position directly, this is a better idea than movers.
    end
end))

Maid(Camera:GetPropertyChangedSignal("CFrame"):Connect(function()
    if (Camera.CFrame.Position - Proxy.Head.CFrame.Position).Magnitude < 1 then
        for _, Obj in next, Character:GetDescendants() do
            if Obj:IsA("BasePart") then
                Obj.LocalTransparencyModifier = 1
            end
        end
    else
        for _, Obj in next, Character:GetDescendants() do
            if Obj:IsA("BasePart") then
                Obj.LocalTransparencyModifier = 0
            end
        end
    end
end))

Stepped:Wait() -- Wait a physics frame.
Player.Character = Proxy
Camera.CameraSubject = Proxy.Humanoid
coroutine.wrap(loadstring(game:HttpGet("https://raw.githubusercontent.com/LegitH3x0R/Roblox-Scripts/main/Animations/R6Animate.lua")))()

if ReloadCharacterScripts then
    for _, Obj in next, Character:GetDescendants() do
        if Obj.ClassName == "LocalScript" or Obj.ClassName == "ModuleScript" and Obj.Name ~= "Animate" then
            Obj:Clone().Parent = Proxy
        end
    end
end

local Respawning = false
local function Respawn()
    if not Respawning then -- Debounce just in case
        Respawning = true
        Maid:Clean()
        Player.Character = Character
        RenderStepped:Wait() -- Just in case
        Character:Destroy()
        StarterGui:SetCore("ResetButtonCallback", true) -- Reset the callback.
    end
end

local ResetBind = Instance.new("BindableEvent")
ResetBind.Event:Connect(Respawn)
StarterGui:SetCore("ResetButtonCallback", ResetBind) -- Dying via the "Reset Character" button. (Why do I need a BindableEvent? Seems like too much.)
Proxy.Humanoid.Died:Connect(Respawn) -- Obviously just dying via anything pretty much.
Character.ChildRemoved:Connect(function(Child) -- Dying via falling out of the map (Kinda hacky but works).
    if Child.Name == "Head" and Child:IsA("BasePart") then
        Respawn()
    end
end)
if not RootAnchorBypassed then
    getgenv().RootAnchorBypassed = true
    local Player = game:GetService("Players").LocalPlayer
    local Character = Player.Character or Player.CharacterAdded:Wait()
    local Root = Character:FindFirstChild("HumanoidRootPart")
    Player.CharacterAdded:Connect(function(C)
        Root = C:WaitForChild("HumanoidRootPart")
        wait(0.5)
        for _, C in pairs(getconnections(Root:GetPropertyChangedSignal("Anchored"))) do C:Disable() end
    end)
    
    local GameMT = getrawmetatable(game)
    local __oldindex = GameMT.__index
    setreadonly(GameMT, false)
    GameMT.__index = newcclosure(function(self, Key)
        if self == Root and Key == "Anchored" then return false end
        return __oldindex(self, Key)
    end)
    setreadonly(GameMT, true)
end
wait(Players.RespawnTime + 0.1) -- Wait until death is bypassed.
if Fling then -- When flinging it only flings well when the character is dead lol.
    Character.Humanoid:ChangeState(Enum.HumanoidStateType.Dead)
    Box.Color3 = Color3.new(0, 1, 0) -- Flinging will work now!
end

return {Success = true, Message = "Success", Hats = Hats, Weld = Weld, Wait = wait}

local PlayerList = {}
for _, Plr in pairs(Players:GetPlayers()) do
    if Plr ~= PlayerInstance then
        PlayerList[Plr] = true
    end
end

getgenv().NETWORKPLAYERCHECK = Players.PlayerAdded:Connect(function(Plr)
    PlayerList[Plr] = true
end)

getgenv().NETWORKPLAYERCHECK2 = Players.PlayerRemoving:Connect(function(Plr)
    local Success, Err = pcall(function() PlayerList[Plr] = nil end)
    if not Success then
        appendfile("network-ownership.log", "Error while de-registering player that left: "..tostring(Err).."\n")
    end
end)

settings().Physics.AllowSleep = false -- Keep the current physics system from sleeping. (Non-moving parts lose ownership.)
settings().Physics.PhysicsEnvironmentalThrottle = Enum.EnviromentalPhysicsThrottle.Disabled -- Keep the physics from throttling.

getgenv().NETWORKOWNER = RunService.Stepped:Connect(function()
    -- Revoke ownership from others
    for Plr, _ in pairs(PlayerList) do
        sethiddenprop(Plr, "MaximumSimulationRadius", 0.01)
        sethiddenprop(Plr, "SimulationRadius", 0.01)
    end

    sethiddenprop(PlayerInstance, "MaximumSimulationRadius", NETWORK_RADIUS)
    setsimulationrad(NETWORK_RADIUS)
end)

game:GetService("RunService").RenderStepped:Connect(function()
    settings().Physics.PhysicsEnvironmentalThrottle = Enum.EnviromentalPhysicsThrottle.Disabled
    settings().Physics.AllowSleep = false
    game.Players.LocalPlayer.ReplicationFocus = workspace
    sethiddenproperty(plr,"SimulationRadius",1000)
    sethiddenproperty(plr,"MaxSimulationRadius",1000)
sethiddenproperty(game.Players.LocalPlayer,"MaximumSimulationRadius",1000)
sethiddenproperty(game.Players.LocalPlayer,"SimulationRadius",1000)
end)
end)
end
end
