/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngineAgendaEntry : NSObject {
    EKTravelAdvisor *_advisor;
    EKTravelAgendaItem *_agendaItem;
    BOOL _dismissed;
    NSString *_eventExternalURL;
}

@property (nonatomic, retain) EKTravelAdvisor *advisor;
@property (nonatomic, retain) EKTravelAgendaItem *agendaItem;
@property (nonatomic) BOOL dismissed;
@property (nonatomic, retain) NSString *eventExternalURL;

- (id)advisor;
- (id)agendaItem;
- (void)dealloc;
- (id)description;
- (BOOL)dismissed;
- (id)eventExternalURL;
- (id)init;
- (void)setAdvisor:(id)arg1;
- (void)setAgendaItem:(id)arg1;
- (void)setDismissed:(BOOL)arg1;
- (void)setEventExternalURL:(id)arg1;

@end
