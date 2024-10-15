use eframe::egui;

pub fn show(ctx: &egui::Context, open: &mut bool) {
    egui::Window::new("Parameter Adjuster")
        .open(open)
        .show(ctx, |ui| {
            ui.heading("Adjust Parameters");

            ui.label("Neural Network Parameters");
            // Example: Parameter adjustments
            ui.label("Learning Rate:");
            ui.add(egui::Slider::new(&mut 0.01, 0.0..=1.0).text("lr"));

            ui.label("Evolutionary Parameters");
            // Example: Slider to set mutation rate
            ui.label("Mutation Rate:");
            ui.add(egui::Slider::new(&mut 0.05, 0.0..=1.0).text("mutation_rate"));

            // Button to start the training process
            if ui.button("Train Neural Network").clicked() {
                // Placeholder: Connect to training logic
                ui.label("Training started!");
            }
        });
}
