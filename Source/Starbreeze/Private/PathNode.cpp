#include "PathNode.h"

bool APathNode::ResetNode() {
    return false;
}

bool APathNode::ResetConnection(const APathNode* OtherPathNode) {
    return false;
}

bool APathNode::OpenConnection(const APathNode* OtherPathNode, const uint8 ChosenDirection) {
    return false;
}

int32 APathNode::NumConnections() const {
    return 0;
}

bool APathNode::HasConnectionTo(const APathNode* OtherPathNode) const {
    return false;
}

FConnectionData APathNode::GetConnectionTo(const APathNode* OtherPathNode) const {
    return FConnectionData{};
}

TArray<APathNode*> APathNode::GetConnectedNodes(int32 StateFilter, int32 DirectionFilter, bool bUseExactDirection) {
    return TArray<APathNode*>();
}

bool APathNode::DeactivateNode() {
    return false;
}

bool APathNode::CloseConnection(const APathNode* OtherPathNode, const uint8 ChosenDirection, const bool bFullyClose) {
    return false;
}

bool APathNode::CanActivateNodeWithUsage(const EPathNodeActualUsage Usage) const {
    return false;
}

bool APathNode::CanActivateNodeWithEvent(const FNodeEventActivationData& EventData) const {
    return false;
}

bool APathNode::ActivateNode(const EPathNodeActualUsage ChosenUsage, const FNodeEventActivationData& ChosenEventData) {
    return false;
}

APathNode::APathNode() {
    this->PotentialUsage = 0;
    this->State = EPathNodeState::Uninitialized;
    this->ActualUsage = EPathNodeActualUsage::Entry;
}

